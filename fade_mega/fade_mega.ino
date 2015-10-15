int led2 = 2;
int led3 = 3;
int led4 = 4;
int led5 = 5;
int led6 = 6;
int led7 = 7;
int led8 = 8;
int led9 = 9;
int led10 = 10;
int led11 = 11;
int led12 = 12;
int led13 = 13;

int led_reading;
int delay_reading;
int delay_time;
int led;

int brightness2 = 0;
int brightness3 = 0;
int brightness4 = 0;
int brightness5 = 0;
int brightness6 = 0;
int brightness7 = 0;
int brightness8 = 0;
int brightness9 = 0;
int brightness10 = 0;
int brightness11 = 0;
int brightness12 = 0;
int brightness13 = 0;

int fadeAmount2 = 5;
int fadeAmount3 = 5;
int fadeAmount4 = 5;
int fadeAmount5 = 5;
int fadeAmount6 = 5;
int fadeAmount7 = 5;
int fadeAmount8 = 5;
int fadeAmount9 = 5;
int fadeAmount10 = 5;
int fadeAmount11 = 5;
int fadeAmount12 = 5;
int fadeAmount13 = 5;


void setup() {
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  pinMode(led9, OUTPUT);
  pinMode(led10, OUTPUT);
  pinMode(led11, OUTPUT);
  pinMode(led12, OUTPUT);
  pinMode(led13, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  led_reading = Serial.read();
//  delay_reading = Serial.read();
  
  if(led_reading > 0) {
    led = led_reading;
    Serial.print(led);
    delay_time = 30;
    //Serial.print(delay_time);
    //Serial.print('\n');
  }
  switch (led) {
    case 49:
     analogWrite(led2, brightness3);
      brightness2 = brightness2 + fadeAmount2;
      if (brightness2 == 255) {
        fadeAmount2 = -fadeAmount2;
      }
      delay(delay_time);
      break;
    case 50:
      analogWrite(led3, brightness3);
      brightness3 = brightness3 + fadeAmount3;
      if (brightness3 == 255) {
        fadeAmount3 = -fadeAmount3;
      }
      delay(delay_time);
      break;
    case 51:
      analogWrite(led4, brightness4);
      brightness4 = brightness4 + fadeAmount4;
      if (brightness4 == 255) {
        fadeAmount4 = -fadeAmount4;
      }
      delay(delay_time);
      break;
    case 52:
      analogWrite(led5, brightness5);
      brightness5 = brightness5 + fadeAmount5;
      if (brightness5 == 255) {
        fadeAmount5 = -fadeAmount5;
      }
      delay(delay_time);
      break;
    case 53:
      analogWrite(led6, brightness6);
      brightness6 = brightness6 + fadeAmount6;
      if (brightness6 == 255) {
        fadeAmount6 = -fadeAmount6;
      }
      delay(delay_time);
      break;
    case 54:
      analogWrite(led7, brightness7);
      brightness7 = brightness7 + fadeAmount7;
      if (brightness7 == 255) {
        fadeAmount7 = -fadeAmount7;
      }
      delay(delay_time);
      break;
    case 55:
      analogWrite(led8, brightness8);
      brightness8 = brightness8 + fadeAmount8;
      if (brightness8 == 255) {
        fadeAmount8 = -fadeAmount8;
      }
      delay(delay_time);
      break;
    case 56:
      analogWrite(led9, brightness9);
      brightness9 = brightness9 + fadeAmount9;
      if (brightness9 == 255) {
        fadeAmount9 = -fadeAmount9;
      }
      delay(delay_time);
      break;
    case 57:
      analogWrite(led10, brightness10);
      brightness10 = brightness10 + fadeAmount10;
      if (brightness10 == 255) {
        fadeAmount10 = -fadeAmount10;
      }
      delay(delay_time);
      break;
    case 48:
      analogWrite(led11, brightness11);
      brightness11 = brightness11 + fadeAmount11;
      if (brightness11 == 255) {
        fadeAmount11 = -fadeAmount11 ;
      }
      delay(delay_time);
      break;
    case 65:
      analogWrite(led12, brightness12);
      brightness12 = brightness12 + fadeAmount12;
      if (brightness12 == 255) {
        fadeAmount12 = -fadeAmount12;
      }
      delay(delay_time);
      break;
    case 66:
      analogWrite(led13, brightness13);
      brightness13 = brightness13 + fadeAmount13;
      if (brightness13 == 255) {
        fadeAmount13 = -fadeAmount13;
      }
      delay(delay_time);
      break;
  }
}

