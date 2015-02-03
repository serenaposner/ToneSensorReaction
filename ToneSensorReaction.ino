
 /*

 
 created 21 Jan 2010 by Tom Igoe
 modified 1 Feb 2015 by Serena Posner
 Pitch goes up as more light is introduced, and goes down as light is dimmed
 */


void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorReading = analogRead(A0);
  Serial.println(sensorReading);

  int thisPitch = map(sensorReading, 1010, 1023, 100, 2000); 
//sensor readings calibrated for light in initial environment (of my living room), would need to be
//modified based on changed conditions before running.
  tone(9, thisPitch, 10);
  delay(100);  
}

