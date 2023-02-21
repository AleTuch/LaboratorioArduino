char valor2 = ' ';

void setup() {
  Serial.begin(9600);    
  pinMode (3 , OUTPUT);  
  pinMode (4 , OUTPUT);
  pinMode (5, OUTPUT);
  pinMode (6, OUTPUT);

}
 
void loop(){
  digitalWrite(3 , HIGH);   
  digitalWrite(4 , HIGH);      
  digitalWrite(5 , HIGH);
  digitalWrite(6 , HIGH);
    

   int valor = digitalRead(11);
  Serial.print("Push: ");
  Serial.println(valor);
  delay(1);
  if(valor==1){
    for(int i=0;i<2;i++){
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
 
  delay(1000);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);

  delay(1000);
  digitalWrite(3, HIGH);
  digitalWrite(3, LOW);
      delay(300);
  digitalWrite(4, HIGH);
  digitalWrite(4, LOW);
      delay(300);
  digitalWrite(5, HIGH);
  digitalWrite(5, LOW);
      delay(300);
  digitalWrite(6, HIGH);
  digitalWrite(6, LOW);
      delay(300);
 
 }   
}
if(Serial.available() != 0){
valor2 = Serial.read();
      Serial.println(valor2);
      delay(1);
  if(valor2 == '2'){
    for(int i=0;i<3;i++){
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);

      delay(2000);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
      delay(2000);

    }
}
}
}

              
