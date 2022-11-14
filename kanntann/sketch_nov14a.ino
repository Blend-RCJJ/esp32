#include "BluetoothSerial.h"

BluetoothSerial bt;
const char *bt_name = "ESP32board"; // Bluetoothのデバイス名

void setup() {
  Serial.begin(115200);
  bt.begin(bt_name);
}

void loop() {
  bt.println(millis() / 1000);
  delay(100);
}
