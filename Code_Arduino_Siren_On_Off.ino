/*
 * Created by ArduinoGetStarted.com
 *
 * This example code is in the public domain
 *
 * Tutorial page: https://arduinogetstarted.com/tutorials/arduino-serial-monitor
 */

void setup() {
  Serial.begin(9600);
  pinMode(4, OUTPUT); // set the digital pin as output:
}

void loop() {
  if(Serial.available())  n // if there is data comming
  {
    String command = Serial.readStringUntil('\n'); // read string until meet newline character

    if(command == "A")
    {
      digitalWrite(4, HIGH); // turn on LED
      Serial.println("SIREN is turned ON"); // send action to Serial Monitor
    }
    else
    if(command == "B")
    {
      digitalWrite(4, LOW);  // turn off LED
      Serial.println("SIREN is turned OFF"); // send action to Serial Monitor
    }
  }
}
