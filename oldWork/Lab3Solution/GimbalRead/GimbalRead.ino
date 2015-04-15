/*
  IMU Analog Input
  Reads from 2 analog pins and prints their values to the serial
  console.


  Created by Daniel Knapp and Matt Asaro
  modified 9 Apr 2015
 

 */

int sensorPin = 1;    // analog pins to read from
int sensorPin1 = 2;
int sensorValue = 0;  // variable to store the value coming from the sensor


void setup() {
  Serial.begin(9600);
}

void loop() {
  
  // read the value from the sensors and print them:
  sensorValue = analogRead(sensorPin);
  Serial.print("A1: ");
  Serial.println(sensorValue);
  sensorValue = analogRead(sensorPin1);
  Serial.print("A2: ");
  Serial.println(sensorValue);
  
  // stop the program for for ### milliseconds:
  delay(500);
}
