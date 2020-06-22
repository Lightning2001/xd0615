int Led = 4;   //DP
int Led1 = 7;  //A
int Led2 = 11;  //C
int Led3 = 10;  //D
int Led4 = 5;  //E
int Led5 = 8;  //F
int Led6 = 9;  //G
int Led7 = 6;  //B

void setup(){
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(Led,OUTPUT);
  pinMode(Led1,OUTPUT);
  pinMode(Led2,OUTPUT);
  pinMode(Led3,OUTPUT);
  pinMode(Led4,OUTPUT);
  pinMode(Led5,OUTPUT);
  pinMode(Led6,OUTPUT);
  pinMode(Led7,OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(Led,LOW);
  digitalWrite(Led1,LOW);
  digitalWrite(Led2,LOW);
  digitalWrite(Led3,LOW);
  digitalWrite(Led4,LOW);
  digitalWrite(Led5,LOW);
  digitalWrite(Led6,LOW);
  digitalWrite(Led7,LOW);   //清屏
  
  digitalWrite(Led,HIGH);   // 显示0
  digitalWrite(Led1,HIGH);
  digitalWrite(Led2,HIGH);
  digitalWrite(Led3,HIGH);
  digitalWrite(Led4,HIGH);
  digitalWrite(Led5,HIGH);
  digitalWrite(Led7,HIGH);
  delay(1000);
  digitalWrite(Led,LOW);
  digitalWrite(Led1,LOW);
  digitalWrite(Led2,LOW);
  digitalWrite(Led3,LOW);
  digitalWrite(Led4,LOW);
  digitalWrite(Led5,LOW);
  digitalWrite(Led7,LOW);
  
  
  
  digitalWrite(Led1,HIGH);   // 显示1
  digitalWrite(Led2,HIGH);
  digitalWrite(Led7,HIGH);
  delay(1000);
  digitalWrite(Led1,LOW);
  digitalWrite(Led2,LOW);
  digitalWrite(Led7,LOW);
 
  
  digitalWrite(Led,HIGH);   // 显示2
  digitalWrite(Led1,HIGH);
  digitalWrite(Led6,HIGH);
  digitalWrite(Led4,HIGH);
  digitalWrite(Led3,HIGH);
  digitalWrite(Led7,HIGH);
  delay(1000);
  digitalWrite(Led,LOW);
  digitalWrite(Led1,LOW);
  digitalWrite(Led6,LOW);
  digitalWrite(Led4,LOW);
  digitalWrite(Led3,LOW);
  digitalWrite(Led7,LOW);

  
  digitalWrite(Led,HIGH);
  digitalWrite(Led1,HIGH);   // 显示3
  digitalWrite(Led2,HIGH);
  digitalWrite(Led3,HIGH);
  digitalWrite(Led6,HIGH);
  digitalWrite(Led7,HIGH);
  delay(1000);
  digitalWrite(Led,LOW);
  digitalWrite(Led1,LOW);
  digitalWrite(Led2,LOW);
  digitalWrite(Led3,LOW);
  digitalWrite(Led6,LOW);
  digitalWrite(Led7,LOW);

   
  digitalWrite(Led1,HIGH);   // 显示4
  digitalWrite(Led2,HIGH);
  digitalWrite(Led5,HIGH);
  digitalWrite(Led6,HIGH);
  digitalWrite(Led7,HIGH);
  delay(1000);
  digitalWrite(Led1,LOW);
  digitalWrite(Led2,LOW);
  digitalWrite(Led5,LOW);
  digitalWrite(Led6,LOW);
  digitalWrite(Led7,LOW);
  

  digitalWrite(Led,HIGH);   // 显示5
  digitalWrite(Led2,HIGH);
  digitalWrite(Led3,HIGH);
  digitalWrite(Led5,HIGH);
  digitalWrite(Led6,HIGH);
  digitalWrite(Led7,HIGH);
  delay(1000);
  digitalWrite(Led,LOW);
  digitalWrite(Led2,LOW);
  digitalWrite(Led3,LOW);
  digitalWrite(Led5,LOW);
  digitalWrite(Led6,LOW);
  digitalWrite(Led7,LOW);
 

  digitalWrite(Led,HIGH);
  digitalWrite(Led2,HIGH);   // 显示6
  digitalWrite(Led3,HIGH);
  digitalWrite(Led4,HIGH);
  digitalWrite(Led5,HIGH);
  digitalWrite(Led6,HIGH);
  digitalWrite(Led7,HIGH);
  delay(1000);
  digitalWrite(Led,LOW);
  digitalWrite(Led2,LOW);
  digitalWrite(Led3,LOW);
  digitalWrite(Led4,LOW);
  digitalWrite(Led5,LOW);
  digitalWrite(Led6,LOW);
  digitalWrite(Led7,LOW);
  

  digitalWrite(Led,HIGH);   // 显示7
  digitalWrite(Led1,HIGH);
  digitalWrite(Led2,HIGH);
  digitalWrite(Led7,HIGH);
  delay(1000);
  digitalWrite(Led,LOW);
  digitalWrite(Led1,LOW);
  digitalWrite(Led2,LOW);
  digitalWrite(Led7,LOW);
  
  
  digitalWrite(Led,HIGH);
  digitalWrite(Led1,HIGH);   // 显示8
  digitalWrite(Led2,HIGH);
  digitalWrite(Led3,HIGH);
  digitalWrite(Led4,HIGH);
  digitalWrite(Led5,HIGH);
  digitalWrite(Led6,HIGH);
  digitalWrite(Led7,HIGH);
  delay(1000);
  digitalWrite(Led,LOW);
  digitalWrite(Led1,LOW);
  digitalWrite(Led2,LOW);
  digitalWrite(Led3,LOW);
  digitalWrite(Led4,LOW);
  digitalWrite(Led5,LOW);
  digitalWrite(Led6,LOW);
  digitalWrite(Led7,LOW);
  

  digitalWrite(Led,HIGH);   // 显示9
  digitalWrite(Led1,HIGH);
  digitalWrite(Led4,HIGH);
  digitalWrite(Led5,HIGH);
  digitalWrite(Led6,HIGH);
  digitalWrite(Led7,HIGH);
  delay(1000);
  digitalWrite(Led,LOW);
  digitalWrite(Led1,LOW);
  digitalWrite(Led4,LOW);
  digitalWrite(Led5,LOW);
  digitalWrite(Led6,LOW);
  digitalWrite(Led7,LOW);
  

  

  
   // wait for a second
}