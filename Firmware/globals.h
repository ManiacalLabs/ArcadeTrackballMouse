#define MOUSE_MIDULT 4

#define V_A 2  // Yellow
#define V_B 3  // Green
#define H_A 4  // Blue
#define H_B 5  // Purple


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


// Short-hand for the various arrays
#define _SCROLL     0
#define _DPI        1
#define _LEFT       2
#define _MID        3
#define _RIGHT      4

byte btn_pins[] = {
    10, // Scroll
    9,  // DPI
    6,  // L
    7,  // R
    8   // M
};

byte led_pins[] = {
    18,  // Scroll
    17,  // DPI
    14,  // L
    15,  // R
    16   // M
};

volatile unsigned long last_int[] = {
    0,
    0,
    0,
    0,
    0
};

#define DO_NONE 0
#define DO_PRESS 1
#define DO_HOLD 2
#define DO_RELEASE 3
volatile byte btn_do[] = {
    DO_NONE,  // Scroll
    DO_NONE,  // DPI
    DO_NONE,  // L
    DO_NONE,  // R
    DO_NONE   // M
};

#define DEBOUNCE_TIME 50

void btn_isr(byte i) {
    if (TimeElapsed(last_int[i], DEBOUNCE_TIME))
    {
        last_int[i] = millis();
        bool state = bool(!digitalRead(btn_pins[i]));
        Serial.println(state);

        if(btn_do[i] == DO_NONE && state){
            Serial.println("Press");
            btn_do[i] = DO_PRESS;
        }
        else if (btn_do[i] == DO_HOLD && !state){
            Serial.println("Release");
            btn_do[i] = DO_RELEASE;
        }
    }
}

void isr_scroll(){ btn_isr(_SCROLL); }
void isr_dpi(){ btn_isr(_DPI); }
void isr_l(){ btn_isr(_LEFT); }
void isr_m(){ btn_isr(_MID); }
void isr_r(){ btn_isr(_RIGHT); }

typedef void (* isr_ptr)();
isr_ptr _isrs[] = {
    isr_scroll,
    isr_dpi,
    isr_l,
    isr_m,
    isr_r
};

void setup_int(byte i) {
    pinMode(btn_pins[i], INPUT_PULLUP);
    attachInterrupt(digitalPinToInterrupt(btn_pins[i]), _isrs[i], CHANGE);
}

void setup_ints(){
    setup_int(_SCROLL);
    // setup_int(_DPI);
    // setup_int(_LEFT);
    // setup_int(_MID);
    // setup_int(_RIGHT);
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
