
#define rpwm 2
#define lpwm 3

void setup(){
  pinMode(rpwm, OUTPUT);
  pinMode(lpwm,OUTPUT);
  }
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(rpwm, HIGH);
  digitalWrite(lpwm,LOW);
  delay(1000);

  digitalWrite(lpwm, HIGH);
  digitalWrite(rpwm,LOW);
  delay(1000);

}
