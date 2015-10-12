int led = 9;
int brightness = 0;
int fadeAmount = 5;
int number;
int cmnd;

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  number = Serial.read();
  if(number != -1) {
    cmnd = number;
  }
  Serial.print(brightness);
  Serial.print('\n');
  analogWrite(led, brightness);
  
  if(cmnd == 49 && brightness < 255) {
    brightness = brightness + fadeAmount;
  } else if(cmnd == 50 && brightness > 0) {
      brightness = brightness - fadeAmount;
  }
  delay(30);
}
