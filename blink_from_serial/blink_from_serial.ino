int led = 13;
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
  Serial.print(cmnd);
  Serial.print('\n');
  
  if(cmnd == 49) {
    digitalWrite(led, HIGH);
    delay(100);
    digitalWrite(led, LOW);
  }
}
