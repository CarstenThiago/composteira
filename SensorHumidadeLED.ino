// C++ code
//
int umidade = 0;
int sensor = A0;
int baixo = 13;
int medio = 12;
int alto = 11;  
void setup(){
  digitalWrite(11,HIGH);
  delay(5000);
  digitalWrite(11,LOW);
  pinMode(sensor, INPUT);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  Serial.begin(9600);
}
//1000 seco
//
void loop()

{
  umidade = analogRead(A0);
  Serial.println(umidade);
  
  if (umidade > 900){
  	digitalWrite(13, HIGH);
  }
  else{
    digitalWrite(13, LOW);
  }

  if(umidade > 500 && umidade < 900){
    digitalWrite(12, HIGH);
  }
  else{
    digitalWrite(12,LOW);
  }

  if (umidade < 500){
    digitalWrite(11, HIGH);
  }
  else{
    digitalWrite(11,LOW);
  }

  delay(3000);
}