#include "Encoder.h"

#define MOUSE_MULT 4

#define H_A 2  // Yellow
#define H_B 3  // Green
#define V_A 4  // Blue
#define V_B 5  // Purple
// Change these pin numbers to the pins connected to your encoder.
//   Best Performance: both pins have interrupt capability
//   Good Performance: only the first pin has interrupt capability
//   Low Performance:  neither pin has interrupt capability
Encoder enc_h(H_A, H_B);
Encoder enc_v(V_A, V_B);
//   avoid using pins with LEDs attached

#define BTN_L       6
#define BTN_M       7
#define BTN_R       8
#define BTN_DPI     9
#define BTN_SCROLL  10

#define LED_L       14
#define LED_M       15
#define LED_R       16
#define LED_DPI     17
#define LED_SCROLL  18


void setup() {
  Serial.begin(115200);
  // while(!Serial){}
  Serial.println("TwoKnobs Encoder Test:");
  Mouse.begin();
}

void loop() {
  long h, v;
  h = enc_h.read();
  v = enc_v.read();
  if (h != 0 || v != 0) {
    Serial.print("H = ");
    Serial.print(h);
    Serial.print(", V = ");
    Serial.print(v);
    Serial.println();
    Mouse.move(h * MOUSE_MULT, v * MOUSE_MULT);
    enc_h.write(0);
    enc_v.write(0);
  }
}