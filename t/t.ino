void setup() {
  pinMode(5, OUTPUT);//5番ピンを出力に設定
}

void loop() {
  digitalWrite(5, HIGH);//5番ピンの出力をHIGH(5V)に設定
  delay(1000);//1000msec待機(1秒待機)
  digitalWrite(5, LOW);//5番ピンの出力をLOW(0V)に設定
  delay(1000);//1000msec待機(1秒待機)
}
