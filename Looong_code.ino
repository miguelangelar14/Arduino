//Proyect starts at 16/06/2017, with the 1st anniversary of Shanghai Disney Resort. Proyect ends at ,
int i;
int a;
int R=11;
int G=10;
int B=9;

int R2=6;
int G2=5;
int B2=3;

//int Rel=5;
//int Rel2=3;

void setup() {
  pinMode(R,OUTPUT);
  pinMode(G,OUTPUT);
  pinMode(B,OUTPUT);
  pinMode(R2,OUTPUT);
  pinMode(G2,OUTPUT);
  pinMode(B2,OUTPUT);
}

void loop() {
dreamwish();
circleoflife();
feelthelove();
partofyourworld();
}
void dreamwish(){  //A Dream is a wish
  digitalWrite(B,HIGH);
  digitalWrite(B2,HIGH);
  delay(5100);
  digitalWrite(B,LOW);
  digitalWrite(B2,LOW);
  delay(1500);
  orange();
  orange();
  delay(5500);
  analogWrite(G2,64);
  digitalWrite(R2,HIGH);
  digitalWrite(B,HIGH);
  analogWrite(R,100);
  delay(2550);
  digitalWrite(R2,LOW);
  digitalWrite(G2,LOW);
  digitalWrite(B,LOW);
  digitalWrite(R,LOW);
  delay(1285);
  digitalWrite(R,HIGH);
  analogWrite(G,64);
  digitalWrite(B2,HIGH);
  analogWrite(R2,100);
  delay(2550);
  digitalWrite(R,LOW);
  digitalWrite(G,LOW);
  digitalWrite(B2,LOW);
  digitalWrite(R2,LOW);
  delay(1285);
  analogWrite(G2,64);
  digitalWrite(R2,HIGH);
  digitalWrite(B,HIGH);
  analogWrite(R,100);
  delay(2550);
  digitalWrite(R2,LOW);
  digitalWrite(G2,LOW);
  digitalWrite(B,LOW);
  digitalWrite(R,LOW);
  delay(4275);
  for(i=0; i<256; i++){
    analogWrite(B,i);
    analogWrite(B2,i);
    delay(10);
  }
  for(i=255; i>90; i--){
    analogWrite(B,i);
    analogWrite(B2,i);
    delay(5);
  }
  for(i=90; i<256; i++){
    analogWrite(B,i);
    analogWrite(B2,i);
    delay(5);
  }
  for(i=255; i>90; i--){
    analogWrite(B,i);
    analogWrite(B2,i);
    delay(5);
  }
  for(i=90; i<256; i++){
    analogWrite(B,i);
    analogWrite(B2,i);
    delay(5);
  }
  for(i=255; i>90; i--){
    analogWrite(B,i);
    analogWrite(B2,i);
    delay(5);
  }
  for(i=90; i<256; i++){
    analogWrite(B,i);
    analogWrite(B2,i);
    delay(5);
  }
  for(i=255; i>-1; i--){
    analogWrite(B,i);
    analogWrite(B2,i);
    delay(4);
  }
  digitalWrite(B,LOW);
  digitalWrite(B2,LOW);
  analogWrite(G,64);
  digitalWrite(R,HIGH);
  analogWrite(G2,64);
  digitalWrite(R2,HIGH);
  delay(2000);
  digitalWrite(R,LOW);
  digitalWrite(G,LOW);
  digitalWrite(B,LOW);
  digitalWrite(R2,LOW);
  digitalWrite(G2,LOW);
  digitalWrite(B2,LOW);
  for(i=0; i<256; i++){
    analogWrite(B,i);
    analogWrite(R,i);
    analogWrite(B2,i);
    analogWrite(R2,i);
    delay(10);
  }
  delay(975);
  analogWrite(B,0);
  analogWrite(R,0);
  analogWrite(B2,0);
  analogWrite(R2,0);
  digitalWrite(G2,HIGH);
  delay(1100);
  digitalWrite(G2,LOW);
  delay(100);
  digitalWrite(R2,HIGH);
  delay(1000);
  digitalWrite(R2,LOW);
  delay(150);
  digitalWrite(G,HIGH);
  delay(500);
  digitalWrite(R2,HIGH);
  delay(500);
  digitalWrite(G,LOW);
  delay(800);
  digitalWrite(R2,LOW);
  delay(700);
  digitalWrite(R2,HIGH);
  delay(275);
  digitalWrite(G,HIGH);
  delay(500);
  digitalWrite(G,LOW);
  digitalWrite(R2,LOW);
  delay(500);
  digitalWrite(G,HIGH);
  digitalWrite(B2,HIGH);
  delay(700);
  digitalWrite(G,LOW);
  digitalWrite(B2,LOW);
  delay(3000);
  for(i=0; i<256; i++){
    analogWrite(B,i);
    analogWrite(R,i);
    analogWrite(B2,i);
    analogWrite(R2,i);
    delay(10);
  }
  delay(8900);
  orange();
  orange();
  delay(12140);
  for(i=0; i<129; i++){
    analogWrite(B,i);
    analogWrite(B2,i);
    delay(1);
  }
  for(i=0; i<256; i++){
    analogWrite(B,i);
    analogWrite(B2,i);
    delay(1);
    }
  for(i=255; i>-1; i--){
    analogWrite(B,i);
    analogWrite(B2,i);
    delay(1);
  }
  for(i=0; i<129; i++){
    analogWrite(B,i);
    analogWrite(B2,i);
    delay(1);
  }
  for(i=0; i<256; i++){
      analogWrite(B,i);
      analogWrite(B2,i);
      delay(1);
    }
  for(i=255; i>-1; i--){
    analogWrite(B,i);
    analogWrite(B2,i);
    delay(1);
  }
  for(i=0; i<129; i++){
    analogWrite(B,i);
    analogWrite(B2,i);
    delay(1);
  }
  for(i=0; i<256; i++){
      analogWrite(B,i);
      analogWrite(B2,i);
      delay(1);
    }
  for(i=255; i>-1; i--){
    analogWrite(B,i);
    analogWrite(B2,i);
    delay(1);
  }
  delay(3000);
  //This part was finished on Saturday, 1st July. (1 LED version)
  //2nd LED version finished on Wenesday, 12th of July.
}

void circleoflife(){ //Lion king's circle of life
  for(i=0; i<256; i++){
    analogWrite(B,i);
    analogWrite(B2,i);
    delay(10);
  }
  delay(5800);
  digitalWrite(B,LOW);
  digitalWrite(B2,LOW);
  digitalWrite(R,HIGH);
  digitalWrite(R2,HIGH);
  delay(2600);
  digitalWrite(R,LOW);
  digitalWrite(R2,LOW);
  digitalWrite(B,HIGH);
  digitalWrite(B2,HIGH);
  delay(2600);
  digitalWrite(B,LOW);
  digitalWrite(B2,LOW);
  digitalWrite(R,HIGH);
  digitalWrite(R2,HIGH);
  delay(3400);
  digitalWrite(R,LOW);
  digitalWrite(R2,LOW);
  digitalWrite(B,HIGH);
  digitalWrite(B2,HIGH);
  delay(2400);
  digitalWrite(B,LOW);
  digitalWrite(B2,LOW);
  digitalWrite(R,HIGH);
  digitalWrite(R2,HIGH);
  delay(5500);
  digitalWrite(R,LOW);
  digitalWrite(R2,LOW);
  for(i=0; i<256; i++){
    analogWrite(G,i);
    analogWrite(G2,i);
    delay(10);
  }
  delay(17400);
  for(i=255; i>100; i--){
    analogWrite(G,i);
    analogWrite(G2,i);
    delay(13);
  }
  for(i=0; i<256; i++){
    analogWrite(B,i);
    analogWrite(B2,i);
    delay(10);
  }
  for(i=99; i>-1; i--){
    analogWrite(G,i);
    analogWrite(G2,i);
    delay(5);
  }
  delay(36000);
}
void feelthelove(){ //Lion King's Can you feel the love?
  for(i=255; i>5; i--){
    analogWrite(B,i);
    analogWrite(B2,i);
    delay(10);
  }
  delay(17650);
  for(i=5; i<256; i++){
    analogWrite(B,i);
    analogWrite(B2,i);
    delay(10);
  }
  delay(43500);
  digitalWrite(B,LOW);
  digitalWrite(B2,LOW);
  delay(26500);
  for(i=0; i<256; i++){
    analogWrite(B,i);
    analogWrite(B2,i);
    delay(10);
  }
  delay(10000);
  digitalWrite(B,LOW);
  digitalWrite(B2,LOW);
  delay(5000);
}
void partofyourworld(){ //The little Mermaid's Part of your World
  for(i=0; i<256; i++){
    analogWrite(G,i);
    analogWrite(G2,i);
    delay(10);
  }
  delay(7450);
  for(i=255; i>-1; i--){
    analogWrite(G,i);
    analogWrite(G2,i);
    delay(10);
  }
  delay(3000);
  for(i=0; i<256; i++){
    analogWrite(B,i);
    analogWrite(R,50);
    delay(10);
  }
  for(i=0; i<256; i++){
    analogWrite(B2,i);
    analogWrite(R2,50);
    delay(10);
  }
  delay(11500);
  digitalWrite(B,LOW);
  digitalWrite(B2,LOW);
  digitalWrite(R,LOW);
  digitalWrite(R2,LOW);
  delay(2500);
  for(i=90; i<256; i++){
    analogWrite(B,i);
    analogWrite(R,50);
    analogWrite(B2,i);
    analogWrite(R2,50);
    delay(10);
  }
  for(i=255; i>90; i--){
    analogWrite(B,i);
    analogWrite(R,50);
    analogWrite(B2,i);
    analogWrite(R2,50);
    delay(10);
  }
  for(i=90; i<256; i++){
    analogWrite(B,i);
    analogWrite(R,50);
    analogWrite(B2,i);
    analogWrite(R2,50);
    delay(10);
  }
  for(i=255; i>90; i--){
    analogWrite(B,i);
    analogWrite(R,50);
    analogWrite(B2,i);
    analogWrite(R2,50);
    delay(10);
  }
  for(i=90; i<256; i++){
    analogWrite(B,i);
    analogWrite(R,50);
    analogWrite(B2,i);
    analogWrite(R2,50);
    delay(10);
  }
  for(i=255; i>90; i--){
    analogWrite(B,i);
    analogWrite(R,50);
    analogWrite(B2,i);
    analogWrite(R2,50);
    delay(10);
  }
  for(i=90; i<256; i++){
    analogWrite(B,i);
    analogWrite(R,50);
    analogWrite(B2,i);
    analogWrite(R2,50);
    delay(10);
  }
  for(i=255; i>90; i--){
    analogWrite(B,i);
    analogWrite(R,50);
    analogWrite(B2,i);
    analogWrite(R2,50);
    delay(10);
  }
  for(i=90; i<256; i++){
    analogWrite(B,i);
    analogWrite(R,50);
    analogWrite(B2,i);
    analogWrite(R2,50);
    delay(10);
  }
  for(i=255; i>90; i--){
    analogWrite(B,i);
    analogWrite(R,50);
    analogWrite(B2,i);
    analogWrite(R2,50);
    delay(10);
  }
  for(i=90; i<256; i++){
    analogWrite(B,i);
    analogWrite(R,50);
    analogWrite(B2,i);
    analogWrite(R2,50);
    delay(10);
  }
  delay(2000);
  for(i=255; i>-1; i--){
    analogWrite(B,i);
    analogWrite(R,50);
    analogWrite(B2,i);
    analogWrite(R2,50);
    delay(10);
  }
  digitalWrite(B,LOW);
  digitalWrite(B2,LOW);
  digitalWrite(R,LOW);
  digitalWrite(R2,LOW);
  orange();
  orange();
  orange();
  orange();
  orange();
  delay(1100);
  digitalWrite(B,HIGH);
  digitalWrite(B2,HIGH);
  delay(8750);
  digitalWrite(B,LOW);
  digitalWrite(B2,LOW);
  delay(250);
  digitalWrite(B,HIGH);
  digitalWrite(B2,HIGH);
  delay(5000);
  digitalWrite(B,LOW);
  digitalWrite(B2,LOW);
  delay(1500);
  blue();
  blue();
  delay(500);
  digitalWrite(B,HIGH);
  digitalWrite(B2,HIGH);
  delay(500);
  digitalWrite(B,LOW);
  digitalWrite(B2,LOW);
  delay(1000);
  digitalWrite(B,HIGH);
  digitalWrite(B2,HIGH);
  delay(500);
  digitalWrite(B,LOW);
  digitalWrite(B2,LOW);
  delay(1000);
  digitalWrite(B,HIGH);
  digitalWrite(B2,HIGH);
  delay(500);
  digitalWrite(B,LOW);
  digitalWrite(B2,LOW);
  delay(2000);
  for(i=0; i>256; i++){
    analogWrite(R,i);
    analogWrite(B,i);
    analogWrite(R2,i);
    analogWrite(B2,i);
    delay(10);
  }
  delay(5000);
}
void orange(){
  for(i=0; i<129; i++){
    analogWrite(G,i);
    analogWrite(G2,i);
    delay(1);
  }
  for(i=0; i<256; i++){
      analogWrite(R,i);
      analogWrite(R2,i);
      delay(1);
    }
  for(i=255; i>-1; i--){
    analogWrite(G,i);
    analogWrite(G2,i);
    analogWrite(R,i);
    analogWrite(R2,i);
    delay(1);
  }
}
void blue(){
  for(i=0; i<129; i++){
    analogWrite(B,i);
    analogWrite(B2,i);
    delay(1);
  }
  for(i=0; i<256; i++){
    analogWrite(B,i);
    analogWrite(B2,i);
    delay(1);
    }
  for(i=255; i>-1; i--){
    analogWrite(B,i);
    analogWrite(B2,i);
    delay(1);
  }
}
