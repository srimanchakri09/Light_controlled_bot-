int leftmotorbackward=D1;
int leftmotorforward=D2;
int rightmotorforward=D3;
int rightmotorbackward=D4;
void setup() {
 pinMode(leftmotorbackward,OUTPUT);
 pinMode(leftmotorforward,OUTPUT);
 pinMode(rightmotorforward,OUTPUT);
 pinMode(rightmotorbackward,OUTPUT);
 pinMode(D6,INPUT);
}

void loop() { 
 int reading=analogRead(D6);
 if (reading<200)  
 {
  digitalWrite(leftmotorforward,HIGH);
  digitalWrite(leftmotorbackward,LOW);
  digitalWrite(rightmotorforward,HIGH);
  digitalWrite(rightmotorbackward,LOW);
 }
 else
 {
  digitalWrite(leftmotorforward,LOW);
  digitalWrite(leftmotorbackward,LOW);
  digitalWrite(rightmotorforward,LOW);
  digitalWrite(rightmotorbackward,LOW);
 }
 delay(100);
}
