
#include "motor.cpp"

Motor motor(0, 1000);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  int input = 0;
  // put your main code here, to run repeatedly:

  while(Serial.available() > 0) {

    // Serial.parseInt() is bloody slow!!
    // TODO: find a better way.
    // supports 16bits
    // min value = -32768
    // max value = 32767
    input = Serial.parseInt();
    
    
    Serial.print("\npos input: ");
    Serial.print(input);
    motor.move(input);
    Serial.print("\nfinal pos: ");
    Serial.print(motor.getPos());
    
  }
}
