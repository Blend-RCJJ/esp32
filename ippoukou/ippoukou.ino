#include "BluetoothSerial.h"

BluetoothSerial SerialBT;

void setup(){
  SerialBT.begin("ESP32board");
}
 void loop(){
  SerialBT.println("Send Message");
  delay(500);
 }
