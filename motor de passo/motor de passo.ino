#include <Stepper.h>
  int passosPorVolta=32;
  Stepper mp(passosPorVolta,8 , 9, 10,11);

void setup() {
  mp.setSpeed(1010);
}

void loop() {
  mp.step(2048);
  delay(500);
  mp.step(-2048);
  delay(500);

}