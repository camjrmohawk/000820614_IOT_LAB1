//I, Cameron Randall, 000820614 guanantee that this is my work and my work only.


#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:

  Serial.begin(115200);

  Serial.println("\n\nHello World");
  Serial.println("\n\nName: Cameron Randall\nStudent Number: 000820614");
  Serial.println("D1 Mini Information");
  //uint32 chipId = ESP.getChipId();
  //uint32 flashChipId = ESP.getFlashChipId();
  Serial.printf("\tChip ID: %u\n", ESP.getChipId());
  //Serial.println(chipId);
  Serial.printf("\tFlash Chip ID: %u\n\n", ESP.getFlashChipId());
  //Serial.println(flashChipId);
}

void loop() {
  // put your main code here, to run repeatedly:
  int runTime = millis();
  Serial.printf("D1 Mini has been running for: %u milliseconds\n", runTime);
  //Serial.println(runTime);
  delay(2000);
}