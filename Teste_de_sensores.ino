
void testa_sensores() {

Serial.print("SET= ");
Serial.print(analogRead(set));
Serial.print("    ");
Serial.print("SDT= ");
Serial.print(analogRead(sdt));
Serial.print("    ");
Serial.print("SDF= ");
Serial.print(analogRead(sdf));
Serial.print("    ");
Serial.print("SEF= ");
Serial.println(analogRead(sef));

}
