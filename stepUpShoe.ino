int trig2=11,echo2=10 ;
int trig1=9,echo1=8 ;   
int vib=13;

void setup()
{ 
  pinMode(vib,OUTPUT);
  pinMode(trig1,OUTPUT);
  pinMode(echo1,INPUT);
  pinMode(trig2,OUTPUT);
  pinMode(echo2,INPUT);
 Serial.begin(9600);
}
float distance1, distance2, duration1, duration2 ;
void loop() 
{
}
