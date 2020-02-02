#define trigpin 13
#define echopin 12
#define buzzerpin 6  
#define ledpin 7

void setup ()
{
  pinMode(trigpin, OUTPUT);
  pinMode(echopin, INPUT);
  pinMode(buzzerpin, OUTPUT);
  pinMode(ledpin, OUTPUT);
  //digitalWrite (ledpin,LOW);
  
}

void loop ()
{
  long duration, distance;
  digitalWrite (trigpin ,LOW);
  digitalWrite (trigpin, HIGH);
  digitalWrite (trigpin ,LOW);
   duration =pulseIn(echopin,HIGH);
  distance =(duration/2)/29;
  if (distance < 60)
  {
    digitalWrite (buzzerpin, HIGH);
    delay (200);
     digitalWrite (ledpin,HIGH);
     delay (200);
  }
 
  else 

 {
  
  digitalWrite (buzzerpin, LOW);
  digitalWrite (ledpin, LOW);
  }
}

