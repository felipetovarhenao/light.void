/**************************
*        light void~      *
*                         *
* digital photocontroller *
*                         *
*************************** 
* 
* Board type: Arduino MEGA 2560 Rev3
* 
* by Felipe Tovar-Henao © Nov/17/2019 
*/

int outval[16] = {};
byte i;
String ldr = "ldr";
String space = " ";

void setup() {
  Serial.begin(19200);
  for (byte dpin = 23; dpin <= 53; dpin += 2) {
    pinMode(dpin, OUTPUT); // odd pins from from 23 to 53
    digitalWrite(dpin, HIGH);
  }
  analogWrite(13, 5); // ON/OFF led (optional)
  delay(1000);
}

void loop() {
  for (i = 0; i < 16; i ++) {
    outval[i] = analogRead(i+54);
    Serial.print(ldr + (i+1) + space); 
    Serial.println(outval[i]);
  }
  delay(8);
}
