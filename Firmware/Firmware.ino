#include "Encoder.h"

#define MOUSE_MULT 4

#define V_A 2  // Yellow
#define V_B 3  // Green
#define H_A 4  // Blue
#define H_B 5  // Purple
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

byte order[] = {LED_SCROLL, LED_DPI, LED_L, LED_M, LED_R};

void setup() {
  Serial.begin(115200);
  Mouse.begin();

  pinMode(BTN_L, INPUT_PULLUP);
  pinMode(BTN_M, INPUT_PULLUP);
  pinMode(BTN_R, INPUT_PULLUP);
  pinMode(BTN_DPI, INPUT_PULLUP);
  pinMode(BTN_SCROLL, INPUT_PULLUP);

  pinMode(LED_L, OUTPUT);
  pinMode(LED_M, OUTPUT);
  pinMode(LED_R, OUTPUT);
  pinMode(LED_DPI, OUTPUT);
  pinMode(LED_SCROLL, OUTPUT);

  digitalWrite(LED_L, LOW);
  digitalWrite(LED_M, LOW);
  digitalWrite(LED_R, LOW);
  digitalWrite(LED_DPI, LOW);
  digitalWrite(LED_SCROLL, LOW);
}

byte i = 0;

void loop() {
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

  if(!digitalRead(BTN_SCROLL)){ Serial.println("SCROLL"); }
  if(!digitalRead(BTN_DPI)){ Serial.println("DPI"); }
  if(!digitalRead(BTN_L)){ Serial.println("LEFT"); }
  if(!digitalRead(BTN_M)){ Serial.println("MID"); }
  if(!digitalRead(BTN_R)){ Serial.println("RIGHT"); }

  // digitalWrite(LED_L, order[i] == LED_L);
  // digitalWrite(LED_M, order[i] == LED_M);
  // digitalWrite(LED_R, order[i] == LED_R);
  // digitalWrite(LED_DPI, order[i] == LED_DPI);
  // digitalWrite(LED_SCROLL, order[i] == LED_SCROLL);
  // delay(100);
  i++;
  if(i >= 5){ i = 0; }
}