//Proyect starts at 16/06/2017, with the 1st anniversary of Shanghai Disney Resort. Proyect ends at ,
int i;
int a;
int R=11;
int G=10;
int B=9;

int R2=8;
int G2=7;
int B2=6;

int Rel=5;
int Rel2=3;

void setup() {
  pinMode(R,OUTPUT);
  pinMode(G,OUTPUT);
  pinMode(B,OUTPUT);
}

void loop() {
  //A Dream is a wish
  digitalWrite(B,HIGH);
  delay(5100);
  digitalWrite(B,LOW);
  delay(1500);
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
  delay(5500);
  analogWrite(G,64);
  digitalWrite(R,HIGH);
  delay(2550);
  digitalWrite(R,LOW);
  digitalWrite(G,LOW);
  delay(1285);
  analogWrite(R,128);
  analogWrite(G,36);
  analogWrite(B,214);
  delay(2550);
  digitalWrite(R,LOW);
  digitalWrite(G,LOW);
  digitalWrite(B,LOW);
  delay(1285);
  analogWrite(G,64);
  digitalWrite(R,HIGH);
  delay(2550);
  digitalWrite(R,LOW);
  digitalWrite(G,LOW);
  delay(4275);
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
    delay(8);
  }
  digitalWrite(B,LOW);
  analogWrite(G,64);
  digitalWrite(R,HIGH);
  delay(2000);
  digitalWrite(R,LOW);
  digitalWrite(G,LOW);
  for(i=0; i<256; i++){
    analogWrite(B,i);
    analogWrite(R,i);
    delay(10);
  }
  delay(975);
  analogWrite(B,0);
  analogWrite(R,0);
  digitalWrite(G,HIGH);
  delay(1100);
  digitalWrite(G,LOW);
  delay(100);
  digitalWrite(R,HIGH);
  delay(1000);
  digitalWrite(R,LOW);
  delay(150);
  digitalWrite(G,HIGH);
  delay(1000);
  digitalWrite(G,LOW);
  delay(800);
  digitalWrite(R,HIGH);
  delay(1275);
  digitalWrite(R,LOW);
  delay(700);
  digitalWrite(G,HIGH);
  delay(700);
  digitalWrite(G,LOW);
  delay(3000);
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
  delay(12140);
  for(i=0; i<129; i++){
    analogWrite(B,i);
    delay(1);
  }
  for(i=0; i<256; i++){
      analogWrite(B,i);
      delay(1);
    }
  for(i=255; i>-1; i--){
    analogWrite(B,i);
    delay(1);
  }
  for(i=0; i<129; i++){
    analogWrite(B,i);
    delay(1);
  }
  for(i=0; i<256; i++){
      analogWrite(B,i);
      delay(1);
    }
  for(i=255; i>-1; i--){
    analogWrite(B,i);
    delay(1);
  }
  for(i=0; i<129; i++){
    analogWrite(B,i);
    delay(1);
  }
  for(i=0; i<256; i++){
      analogWrite(B,i);
      delay(1);
    }
  for(i=255; i>-1; i--){
    analogWrite(B,i);
    delay(1);
  }
  delay(3000);
  //This part was finished on Saturday, 1st July. (1 LED version)
  //Lion kingÂ´s circle of life
  for(i=0; i<256; i++){
    analogWrite(B,i);
    delay(10);
  }
  delay(5300);
  digitalWrite(B,LOW);
  digitalWrite(R,HIGH);
  delay(2200);
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
