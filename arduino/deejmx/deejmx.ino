#include <DMXSerial.h>

void setup () {
  DMXSerial.init(DMXReceiver);
  Serial.begin(9600);
}

void loop() {
  Serial.print(String(DMXSerial.read(1)*4));
  for(int i = 2; i <= 512; i++)
    Serial.print('|' + String(DMXSerial.read(i)*4));
  Serial.println();
  delay(30);
}