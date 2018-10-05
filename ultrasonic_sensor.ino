#define trig 12
#define echo 13


void setup(){
  Serial.begin(9600);
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  digitalWrite(trig,LOW);
}

void loop(){
  int dist=0;
  int duration=0;
  digitalWrite(trig,HIGH);
  delayMicroseconds(5);
  digitalWrite(trig,LOW);
  delayMicroseconds(5);
  //digitalWrite(trig,LOW);
  delayMicroseconds(10);
  duration=pulseIn(echo,HIGH);
  dist=duration/(34*2);
  Serial.print("Distance : ");
  Serial.println(dist);
  delay(500);
}
