
/*
 *  Use this code to send Serial data
 *  to the Processing "SoundPlayer" sketch
 *  in order to trigger sounds on a computer.
 *
 */

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.write(0);
  delay(1000);
  Serial.write(1);
  delay(1000);
  Serial.write(2);
  delay(1000);
}


