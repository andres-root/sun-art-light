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

int led;
int last_led;
int delay_reading;
int delay_time;
int timer;

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
int brightness14 = 0;

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
int fadeAmount14 = 5;


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
  if(Serial.available() > 0) {
    delay_reading = Serial.parseInt() * 10;
    delay_time = 10;
    led = random(2, 21);
  }
    switch(led) {
      case 2:
        analogWrite(led2, brightness2);
        brightness2 = brightness2 + fadeAmount2;
        if (brightness2 == 0) {
         digitalWrite(led2, LOW);
         Serial.print(1, DEC);
         fadeAmount2 = -fadeAmount2;
         delay(1000);
        }
        if (brightness2 == 255) {
          fadeAmount2 = -fadeAmount2;
          delay(delay_reading);
        }
        delay(delay_time);
        break;
      case 3:
        analogWrite(led3, brightness3);
        brightness3 = brightness3 + fadeAmount3;
        if (brightness3 == 0) {
           digitalWrite(led3, LOW);
           Serial.println(1);
           fadeAmount3 = -fadeAmount3;
           delay(1000);
        }
        if (brightness3 == 255) {
            fadeAmount3 = -fadeAmount3;
            delay(delay_reading);
        }
        delay(delay_time);
        break;
      case 4:
        analogWrite(led4, brightness4);
        brightness4 = brightness4 + fadeAmount4;
        if (brightness4 == 0) {
         digitalWrite(led4, LOW);
         Serial.print(1, DEC);
         fadeAmount4 = -fadeAmount4;
         delay(1000);
        }
        if (brightness4 == 255) {
          fadeAmount4 = -fadeAmount4;
          delay(delay_reading);
        }
        delay(delay_time);
        break;
      case 5:
        analogWrite(led5, brightness5);
        brightness5 = brightness5 + fadeAmount5;
        if (brightness5 == 0) {
         digitalWrite(led5, LOW);
         Serial.println(1);
         fadeAmount5 = -fadeAmount5;
         delay(1000);
        }
        if (brightness5 == 255) {
          fadeAmount5 = -fadeAmount5;
          delay(delay_reading);
        }
        delay(delay_time);
        break;
      case 6:
        analogWrite(led6, brightness6);
        brightness6 = brightness6 + fadeAmount6;
        if (brightness6 == 0) {
         digitalWrite(led6, LOW);
         Serial.println(1);
         fadeAmount6 = -fadeAmount6;
         delay(1000);
        }
        if (brightness6 == 255) {
          fadeAmount6 = -fadeAmount6;
          delay(delay_reading);
        }
        delay(delay_time);
        break;
      case 7:
        analogWrite(led7, brightness7);
        brightness7 = brightness7 + fadeAmount7;
        if (brightness7 == 0) {
         digitalWrite(led7, LOW);
         Serial.println(1);
         fadeAmount7 = -fadeAmount7;
         delay(1000);
        }
        if (brightness7 == 255) {
          fadeAmount7 = -fadeAmount7;
          delay(delay_reading);
        }
        delay(delay_time);
        break;
      case 8:
        analogWrite(led8, brightness8);
        brightness8 = brightness8 + fadeAmount8;
        if (brightness8 == 0) {
         digitalWrite(led8, LOW);
         Serial.println(1);
         fadeAmount8 = -fadeAmount8;
         delay(1000);
        }
        if (brightness8 == 255) {
          fadeAmount8 = -fadeAmount8;
          delay(delay_reading);
        }
        delay(delay_time);
        break;
      case 9:
        analogWrite(led9, brightness9);
        brightness9 = brightness9 + fadeAmount9;
        if (brightness9 == 0) {
         digitalWrite(led9, LOW);
         Serial.println(1);
         fadeAmount9 = -fadeAmount9;
         delay(1000);
        }
        if (brightness9 == 255) {
          fadeAmount9 = -fadeAmount9;
          delay(delay_reading);
        }
        delay(delay_time);
        break;
      case 10:
        analogWrite(led10, brightness10);
        brightness10 = brightness10 + fadeAmount10;
        if (brightness10 == 0) {
         digitalWrite(led10, LOW);
         Serial.println(1);
         fadeAmount10 = -fadeAmount10;
         delay(1000);
        }
        if (brightness10 == 255) {
          fadeAmount10 = -fadeAmount10;
          delay(delay_reading);
        }
        delay(delay_time);
        break;
      case 11:
        analogWrite(led11, brightness11);
        brightness11 = brightness11 + fadeAmount11;
        if (brightness11 == 0) {
         digitalWrite(led11, LOW);
         Serial.println(1);
         fadeAmount11 = -fadeAmount11;
         delay(1000);
        }
        if (brightness11 == 255) {
          fadeAmount11 = -fadeAmount11;
          delay(delay_reading);
        }
        delay(delay_time);
        break;
      case 12:
        analogWrite(led12, brightness12);
        brightness12 = brightness12 + fadeAmount12;
        if (brightness12 == 0) {
         digitalWrite(led12, LOW);
         Serial.println(1);
         fadeAmount12 = -fadeAmount12;
         delay(1000);
        }
        if (brightness12 == 255) {
          fadeAmount12 = -fadeAmount12;
          delay(delay_reading);
        }
        delay(delay_time);
        break;
      case 13:
        analogWrite(led13, brightness13);
        brightness13 = brightness13 + fadeAmount13;
        if (brightness13 == 0) {
         digitalWrite(led13, LOW);
         Serial.println(1);
         fadeAmount13 = -fadeAmount13;
         delay(1000);
        }
        if (brightness13 == 255) {
          fadeAmount13 = -fadeAmount13;
          delay(delay_reading);
        }
        delay(delay_time);
        break;
      case 14:
        analogWrite(led5, brightness14);
        analogWrite(led7, brightness14);
        brightness14 = brightness14 + fadeAmount14;
        if (brightness14 == 0) {
         digitalWrite(led5, LOW);
         digitalWrite(led7, LOW);
         Serial.println(1);
         fadeAmount14 = -fadeAmount14;
         delay(1000);
        }
        if (brightness14 == 255) {
          fadeAmount14 = -fadeAmount14;
          delay(delay_reading);
        }
        delay(delay_time);
        break;
    }
}

