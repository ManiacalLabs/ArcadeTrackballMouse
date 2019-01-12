#include "Encoder.h"
#include "globals.h"

Encoder enc_h(H_A, H_B);
Encoder enc_v(V_A, V_B);

byte click_states[] = {0, 0, 0};

void do_click(byte i){
    if(btns[i].wasPressed()){
        set_led(i, true);
        click_states[i] = 1;
    }
    else if(btns[i].wasReleased()){
        set_led(i, false);
        click_states[i] = 0;
    }
}

bool scroll_mode = false;
void do_scroll(){
    static byte i = _SCROLL;
    if(btns[i].isPressed()){
        set_led(i, true);
        scroll_mode = true;
    }
    else if(btns[i].isReleased()){
        set_led(i, false);
        scroll_mode = false;
    }
}

bool dpi_state = false;
void do_dpi(){
    static byte i = _DPI;
    if(btns[i].wasPressed()){
        dpi_state = !dpi_state;
    }

    set_led(i, dpi_state);
}

void setup()
{
    Serial.begin(115200);
    Mouse.begin();

    setup_btns();
    setup_leds();
}

void loop()
{
    static long h, v;
    static byte mult = MOUSE_MULT_HIGH;

    read_btns();

    do_dpi();
    do_scroll();
    if(!scroll_mode) {
        do_click(_LEFT);
        do_click(_MID);
        do_click(_RIGHT);
        Mouse.set_buttons(click_states[_LEFT], click_states[_MID], click_states[_RIGHT]);
    }

    h = enc_h.read();
    v = enc_v.read();
    if (h != 0 || v != 0) {
        if(scroll_mode){
            Mouse.scroll(v);
        }
        else {
            mult = dpi_state ? MOUSE_MULT_LOW : MOUSE_MULT_HIGH;
            Mouse.move(h * mult, v * mult * -1); // vert is inverted
        }

        // Reset encoder values so always -1/0/1
        enc_h.write(0);
        enc_v.write(0);
    }
}
