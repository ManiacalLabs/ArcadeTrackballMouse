#include "Encoder.h"
#include "globals.h"

Encoder enc_h(H_A, H_B);
Encoder enc_v(V_A, V_B);

void setup()
{
    Serial.begin(115200);
    Mouse.begin();

    setup_ints();
    setup_leds();
}

void loop()
{
    // long h, v;
    // h = enc_h.read();
    // v = enc_v.read() * -1; // vertical is inverted
    // if (h != 0 || v != 0) {
    //   Serial.print("H = ");
    //   Serial.print(h);
    //   Serial.print(", V = ");
    //   Serial.print(v);
    //   Serial.println();
    //   Mouse.move(h * MOUSE_MULT, v * MOUSE_MULT);
    //   enc_h.write(0);
    //   enc_v.write(0);
    // }

    // set_led(_SCROLL, true);
    // delay(500);
    // set_led(_SCROLL, false);
    // delay(500);

    // if(btn_do[_SCROLL] == DO_PRESS){ Serial.println("Press"); btn_do[_SCROLL] = DO_HOLD; }
}
