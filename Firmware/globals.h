#include "Button.h"

#define MOUSE_MULT_HIGH 4
#define MOUSE_MULT_LOW  2

#define V_A 2  // Yellow
#define V_B 3  // Green
#define H_A 4  // Blue
#define H_B 5  // Purple


#define BTNS 5 // Button Count
// Short-hand for the various arrays
#define _LEFT       0
#define _MID        1
#define _RIGHT      2
#define _SCROLL     3
#define _DPI        4

byte pattern_order[] = {_SCROLL, _DPI, _LEFT, _MID, _RIGHT};

byte btn_pins[] = {
    6,  // L
    7,  // R
    8,  // M
    10, // Scroll
    9   // DPI
};

byte led_pins[] = {
    14,  // L
    15,  // R
    16,   // M
    18,  // Scroll
    17  // DPI
};

volatile unsigned long last_int[] = {
    0,
    0,
    0,
    0,
    0
};

Button btn_scroll(btn_pins[_SCROLL]);
Button btn_dpi(btn_pins[_DPI]);
Button btn_left(btn_pins[_LEFT]);
Button btn_mid(btn_pins[_MID]);
Button btn_right(btn_pins[_RIGHT]);

Button btns[] = {
    btn_left,
    btn_mid,
    btn_right,
    btn_scroll,
    btn_dpi
};

void setup_btns(){
    for(byte i=0; i<BTNS; i++){
        btns[i].begin();
    }
}

void read_btns(){
    for(byte i=0; i<BTNS; i++){
        btns[i].read();
    }
}

void setup_leds(){
    pinMode(led_pins[_LEFT], OUTPUT);
    pinMode(led_pins[_MID], OUTPUT);
    pinMode(led_pins[_RIGHT], OUTPUT);
    pinMode(led_pins[_DPI], OUTPUT);
    pinMode(led_pins[_SCROLL], OUTPUT);

    digitalWrite(led_pins[_LEFT], LOW);
    digitalWrite(led_pins[_MID], LOW);
    digitalWrite(led_pins[_RIGHT], LOW);
    digitalWrite(led_pins[_DPI], LOW);
    digitalWrite(led_pins[_SCROLL], LOW);
}

void set_led(byte i, bool state){
    digitalWrite(led_pins[i], state);
}

#define LAST_EVENT_TIMEOUT 60000
unsigned long last_event = 0;
bool in_pattern = false;
byte pattern_dir = 1;

inline void reset_event(){last_event = millis();}

//Helper for time delays without actually pausing execution
bool TimeElapsed(unsigned long ref, unsigned long wait)
{
	static unsigned long now = 0;
	static bool result;
	result = false;
	now = millis();

	if(now < ref || ref == 0) //for the 50 day rollover or first boot
		result = true;
	else if((now - ref) > wait)
		result = true;

	return result;
}
