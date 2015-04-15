
int sensorPin = 2;
int pwmPin = 3;
int sensorValue = 0;


void setup() {
  // put your setup code here, to run once:
  pinMode(pwmPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  sensorValue = analogRead(sensorPin);
  Serial.print("A2: ");
  Serial.println(sensorValue);
  
  sensorValue = map(sensorValue, 250, 1023, 0, 255);
  
  analogWrite(pwmPin, sensorValue);
}
