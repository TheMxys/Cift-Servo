#include <Joystick.h>
#include <Servo.h>

Joystick_ Joystick;
#define potisko1 A0
#define potisko2 A1

Servo motur1;
Servo motur2;

int potisko1deger;
int potisko2deger;

int potisko1aci;
int potisko2aci;


void setup() {

 Joystick.begin();
  motur1.attach(6);
  motur2.attach(5);
}

void loop() {
  potisko1deger = analogRead(potisko1);
  potisko1aci = map(potisko1deger, 0, 1023, 0, 180);
  potisko2deger = analogRead(potisko2);
  potisko2aci = map(potisko2deger, 0, 1023, 0, 90);
  motur1.write(potisko1aci);
  motur2.write(potisko2aci);


}
