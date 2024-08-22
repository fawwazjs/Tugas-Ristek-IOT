// C++ code
//
#define blue 2
#define yellow 3
#define red 4
#define piezo 5
#define sensor A0

void setup(){
  for (int i=2;i<6;i++)
      pinMode(i, OUTPUT);
  
  Serial.begin(9600);
}

void loop()
{
 for (int i=2;i<6;i++)
   digitalWrite(i,LOW);
  
  status_Indicator();
}

void status_Indicator()
{
  int sensor_In = analogRead(A0);
  Serial.println(sensor_In);
  
  if(sensor_In >=40)
  {
    digitalWrite(red,HIGH);
    digitalWrite(piezo,HIGH);
  }
  else if(sensor_In >=25)
  {
   digitalWrite(yellow,HIGH); 
  }
  else{digitalWrite(blue,HIGH);}
  delay(10);
}
