#include <SoftwareSerial.h>
SoftwareSerial BT(8, 9);   // 接收腳,傳送腳
char val;
void setup() {
Serial.begin(9600);
Serial.println("BT is ready!");
BT.begin(9600); }
void loop() {
if (Serial.available()) {
val = Serial.read();
BT.print(val); }
if (BT.available()) {
val = BT.read();
Serial.print(val); } }
