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
/*
 * Sensor 1
*/
        digitalWrite(trig1,LOW);   
        delay(2);
        digitalWrite(trig1,HIGH);
        delay(10);
        digitalWrite(trig1,LOW);
        duration1 =pulseIn(echo1,HIGH);
        distance1 = (duration1/2)/29.1;
        Serial.print(distance1);
        Serial.println();
        delay(10);
/*
 * Sensor 1
*/
        digitalWrite(trig2,LOW);   
        delay(2);
        digitalWrite(trig2,HIGH);
        delay(10);
        digitalWrite(trig2,LOW);
        duration2 =pulseIn(echo2,HIGH);
        distance2 = (duration2/2)/29.1;
        Serial.print(distance2);
        Serial.println();
        delay(10);

   if(distance1>8 && distance1<20)
   {
        if( distance1-distance2<1 && distance1-distance2>-1)
        {
                Serial.print("Its a step down");
                Serial.println();
                digitalWrite(vib,HIGH);
                delay(2500); 
                digitalWrite(vib,LOW);
        }
        else
        {
                Serial.print("Its a pitfall");
                Serial.println();
                digitalWrite(vib,HIGH);
                delay(200);
                digitalWrite(vib,LOW);
  
        }   
   }
   else if(distance1>20)
   {
        Serial.print("Its a pitfall");
        Serial.println();
        digitalWrite(vib,HIGH);
        delay(200);
        digitalWrite(vib,LOW);
   }
   else  
   {
        Serial.print("Its just an elevation change");
        Serial.println();
        digitalWrite(vib,LOW);
        delay(200);
   } 
}
