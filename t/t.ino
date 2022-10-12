#include "BluetoothSerial.h"

#if !defined(CONFIG_BT_ENABLED) || !defined(CONFIG_BLUEDROID_ENABLED)
#error Bluetooth is not enabled! Please run `make menuconfig` to and enable it
#endif

BluetoothSerial SerialBT;

void setup() {
  Serial.begin(115200);
  SerialBT.begin("ESP32test");
  Serial.println("device start");
  pinMode(13, OUTPUT);
}

char databox;
void loop() {

  if (SerialBT.available()) {
    databox = SerialBT.read();
    Serial.println(databox);

    if (databox == 'L') {
      digitalWrite(13, LOW);
    }
    if (databox == 'T') {
      digitalWrite(13, HIGH);
    }
  }
  delay(20);
}
