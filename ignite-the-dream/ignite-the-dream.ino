//Proyect starts at 16/06/2017, with the 1st anniversary of Shanghai Disney Resort. Proyect ends at ,
int i;
int a;
int R=11;
int G=10;
int B=9;
void setup() {
  pinMode(R,OUTPUT);
  pinMode(G,OUTPUT);
  pinMode(B,OUTPUT);
}

void loop() {
  for(i=0; i<256; i++){
    analogWrite(G,i);
    delay(10);
  }
  delay(3900);
  for(i=255; i>-1; i--){
    analogWrite(G,i);
    delay(10);
  }
  delay(250);
  for(i=0; i<256; i++){
    analogWrite(B,i);
    delay(10);
  }
  for(i=0; i<256; i++){
    analogWrite(R,i);
    delay(10);
  }
  delay(250);
  for(i=255; i>-1; i--){
    analogWrite(R,i);
    delay(10);
  }
  for(i=0; i<256; i++){
    analogWrite(R,i);
    delay(10);
  }
  delay(200);
  for(i=255; i>-1; i--){
    analogWrite(R,i);
    analogWrite(B,i);
    delay(10);
  }
  delay(250);
  //A Dream is a wish
  for(i=0; i<256; i++){
    analogWrite(B,i);
    delay(10);
  }
  for(i=255; i>-1; i--){
    analogWrite(B,i);
    delay(10);
  }
  delay(1000);
  for(i=0; i<129; i++){
    analogWrite(G,i);
    delay(1);
  }
  for(i=0; i<256; i++){
      analogWrite(R,i);
      delay(1);
    }
  for(i=255; i>-1; i--){
    analogWrite(G,i);
    analogWrite(R,i);
    delay(1);
  }
  delay(7500);
  for(i=0; i<256; i++){
    analogWrite(G,i);
    delay(10);
  }
  for(i=255; i>-1; i--){
    analogWrite(G,i);
    delay(10);
  }
  for(i=0; i<256; i++){
    analogWrite(G,i);
    delay(10);
  }
  for(i=255; i>-1; i--){
    analogWrite(G,i);
    delay(10);
  }
  delay(3000);
  for(i=0; i<256; i++){
    analogWrite(B,i);
    delay(10);
  }
  for(i=255; i>90; i--){
    analogWrite(B,i);
    delay(10);
  }
  for(i=90; i<256; i++){
    analogWrite(B,i);
    delay(10);
  }
  for(i=255; i>90; i--){
    analogWrite(B,i);
    delay(10);
  }
  for(i=90; i<256; i++){
    analogWrite(B,i);
    delay(10);
  }
  for(i=255; i>-1; i--){
    analogWrite(B,i);
    delay(5);
  }
  delay(2000);
  for(i=0; i<256; i++){
    analogWrite(B,i);
    analogWrite(R,i);
    delay(10);
  }
  for(i=255; i>-1; i--){
    analogWrite(B,i);
    delay(10);
  }
  for(i=0; i<256; i++){
    analogWrite(G,i);
    delay(5);
  }
  for(i=255; i>-1; i--){
    analogWrite(R,i);
    analogWrite(G,i);
    delay(5);
  }
  for(i=0; i<256; i++){
    analogWrite(B,i);
    analogWrite(R,i);
    delay(10);
  }
  for(i=255; i>-1; i--){
    analogWrite(B,i);
    analogWrite(R,i);
    delay(5);
  }
  for(i=0; i<256; i++){
    analogWrite(B,i);
    analogWrite(R,i);
    delay(10);
  }
  delay(8900);
  for(i=255; i>-1; i--){
    analogWrite(B,i);
    analogWrite(R,i);
    delay(10);
  }
  delay(400);
  for(i=0; i<129; i++){
    analogWrite(G,i);
    delay(1);
  }
  for(i=0; i<256; i++){
      analogWrite(R,i);
      delay(1);
    }
  for(i=255; i>-1; i--){
    analogWrite(G,i);
    analogWrite(R,i);
    delay(1);
  }
  delay(6600);
  for(i=0; i<129; i++){
    analogWrite(G,i);
    delay(1);
  }
  for(i=0; i<256; i++){
      analogWrite(R,i);
      delay(1);
    }
  for(i=255; i>-1; i--){
    analogWrite(G,i);
    analogWrite(R,i);
    delay(1);
  }
  for(i=0; i<129; i++){
    analogWrite(G,i);
    delay(1);
  }
  for(i=0; i<256; i++){
      analogWrite(R,i);
      delay(1);
    }
  for(i=255; i>-1; i--){
    analogWrite(G,i);
    analogWrite(R,i);
    delay(1);
  }
  delay(6500);
  for(i=0; i<256; i++){
      analogWrite(R,i);
      delay(1);
    }
  for(i=255; i>-1; i--){
    analogWrite(G,i);
    analogWrite(R,i);
    delay(1);
  }
  for(i=0; i<256; i++){
      analogWrite(R,i);
      delay(1);
    }
  for(i=255; i>-1; i--){
    analogWrite(G,i);
    analogWrite(R,i);
    delay(1);
  }
  delay(2000);
  //Lion king´s circle of life
  for(i=0; i<256; i++){
    analogWrite(B,i);
    delay(10);
  }
  delay(4800);
  for(i=255; i>-1; i--){
    analogWrite(B,i);
    delay(10);
  }
  digitalWrite(R,HIGH);
  delay(3500);
  digitalWrite(R,LOW);
  digitalWrite(B,HIGH);
  delay(2200);
  digitalWrite(B,LOW);
  digitalWrite(R,HIGH);
  delay(3000);
  digitalWrite(R,LOW);
  digitalWrite(B,HIGH);
  delay(2000);
  digitalWrite(B,LOW);
  digitalWrite(R,HIGH);
  delay(5500);
  digitalWrite(R,LOW);
  for(i=0; i<256; i++){
    analogWrite(G,i);
    delay(10);
  }
  delay(17400);
  for(i=255; i>100; i--){
    analogWrite(G,i);
    delay(13);
  }
  for(i=0; i<256; i++){
    analogWrite(B,i);
    delay(10);
  }
  for(i=99; i>-1; i--){
    analogWrite(G,i);
    delay(5);
  }
  delay(31500);
  for(i=0; i<256; i++){
    analogWrite(R,i);
    delay(10);
  }
    digitalWrite(B,LOW);
  for(i=0; i<90; i++){
    analogWrite(G,i);
    delay(5);
  }
  digitalWrite(G,LOW);
  delay(1000);
}
