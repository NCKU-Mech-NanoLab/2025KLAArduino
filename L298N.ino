const byte LEFT1 = 8;
const byte LEFT2 = 9;
const byte LEFT_PWM = 10;
const byte RIGHT1 = 7;
const byte RIGHT2 = 6;
const byte RIGHT_PWM = 5;
byte motorspeed = 80;
void setup() {
 pinMode(LEFT1, OUTPUT); 
 pinMode(LEFT2, OUTPUT);
 pinMode(LEFT_PWM, OUTPUT);
 pinMode(RIGHT1, OUTPUT);
 pinMode(RIGHT2, OUTPUT);
 pinMode(RIGHT_PWM, OUTPUT); }

void forward(){
 digitalWrite(LEFT1, HIGH);
 digitalWrite(LEFT2, LOW);
 analogWrite(LEFT_PWM, motorspeed);
 digitalWrite(RIGHT1, LOW);
 digitalWrite (RIGHT2, HIGH);
 analogWrite(RIGHT_PWM, motorspeed); }
void backward() {
 digitalWrite(LEFT1, LOW);
 digitalWrite (LEFT2, HIGH);
 analogWrite(LEFT_PWM, motorspeed);
 digitalWrite(RIGHT1, HIGH);
 digitalWrite(RIGHT2, LOW);
 analogWrite(RIGHT_PWM, motorspeed); }

void turnLeft() {
 analogWrite(LEFT_PWM, 0);
 digitalWrite(RIGHT1, LOW);
 digitalWrite (RIGHT2, HIGH);
 analogWrite(RIGHT_PWM, motorspeed); }

void turnRight() {
 digitalWrite(LEFT1, HIGH);
 digitalWrite(LEFT2, LOW);
 analogWrite(LEFT_PWM, motorspeed);
 analogWrite(RIGHT_PWM, 0); }

void stopMotor() {
 analogWrite(LEFT_PWM, 0);
 analogWrite(RIGHT_PWM, 0); }

void loop() {
 forward();
   delay(2000);
 backward();
   delay(2000);
 turnRight();
   delay(2000);
 turnLeft();
   delay(2000);
 stopMotor();
   delay(2000); }
