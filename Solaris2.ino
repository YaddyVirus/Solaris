#include <SoftwareSerial.h>  
SoftwareSerial BTSerial(10, 11);
void setup() {
  BTSerial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(A0);
  float voltage = sensorValue*(5.0/1024.0);
  BTSerial.print("Voltage ");
  BTSerial.println(voltage);
  BTSerial.println("Current: 329 mA");
  BTSerial.print("Output power: ");
  BTSerial.print(voltage*329);
  BTSerial.println("mW");
  delay(5000);
  BTSerial.println();

}
