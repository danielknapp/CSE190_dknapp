
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
  
  sensorValue = sensorValue - 200;
  sensorValue = sensorValue / 4;
  
  analogWrite(pwmPin, sensorValue);
}
