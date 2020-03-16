int Led1=2;
int Led2=3;
int Led3=4;
int Led4=5;
int Led5=6;




void setup() {
  pinMode(Led1, OUTPUT);
  pinMode(Led2, OUTPUT);
  pinMode(Led3, OUTPUT);
  pinMode(Led4, OUTPUT);
  pinMode(Led5, OUTPUT);
}

void loop() {
  digitalWrite(Led3, HIGH);
  delay(1000);
  digitalWrite(Led3, LOW);
  digitalWrite(Led2, HIGH);
  digitalWrite(Led4,HIGH);
  delay(1000);
  digitalWrite(Led2, LOW); 
  digitalWrite(Led4, LOW);
  digitalWrite(Led1, HIGH);
  digitalWrite(Led5, HIGH);
  delay(1000);
  digitalWrite(Led1, LOW); 
  digitalWrite(Led5, LOW);
  delay(1000);

  digitalWrite(Led1, HIGH); 
  digitalWrite(Led5,HIGH);
  delay(1000);
  digitalWrite(Led1, LOW); 
  digitalWrite(Led5, LOW);
  digitalWrite(Led2, HIGH); 
  digitalWrite(Led4, HIGH);
  delay(1000);
  digitalWrite(Led2, LOW); 
  digitalWrite(Led4, LOW);
  digitalWrite(Led3, HIGH);  
  delay(1000);
  digitalWrite(Led3, LOW);
  
  
}
