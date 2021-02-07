
#include "cvalprep.hpp"

CValPrep vp(200,255,128);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println(vp.getDisplayLineDEC());
  Serial.println(vp.getDisplayLineHEX(true,true));
}

void loop() {
  // put your main code here, to run repeatedly
}
