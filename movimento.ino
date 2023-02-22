void frente() {
  digitalWrite(medf, HIGH);
  digitalWrite(medt, LOW);
  analogWrite(mev, 225);
  digitalWrite(mddf, HIGH);
  digitalWrite(mddt, LOW);
  analogWrite(mdv, 225);
}


void para() {
  digitalWrite(medf, LOW);
  analogWrite(mev, 0);
  digitalWrite(mddf, LOW);
  analogWrite(mdv, 0);
}

void tras() {
  digitalWrite(medf, LOW);
  digitalWrite(medt, HIGH);
  analogWrite(mev, 225);
  digitalWrite(mddf, LOW);
  digitalWrite(mddt, HIGH);
  analogWrite(mdv, 225);
}

void direita() {
  digitalWrite(medf, HIGH);
  digitalWrite(medt, LOW);
  analogWrite(mev, 0);
  digitalWrite(mddf, LOW);
  digitalWrite(mddt, HIGH);
  analogWrite(mdv, 0);
}

void esquerda() {
  digitalWrite(medf, LOW);
  digitalWrite(medt, HIGH);
  analogWrite(mev, 0);
  digitalWrite(mddf, HIGH);
  digitalWrite(mddt, LOW);
  analogWrite(mdv, 0);
}
