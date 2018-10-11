
//connected to digital pins
#define motL1 0                   //left motors
#define motL2 1
#define motR1 2                   //right motors
#define motR2 3

//connected to analog pins 3 sensors employed
#define S2 0
#define S3 1
#define S4 2


int motL1=0, motL2=1, motR1=2, motR2=3;   //connected to digital pins
int S2=0, S3=1, S4=2;   //connected to analog pins


void setup()
{
  pinMode(motL1, OUTPUT);
  pinMode(motL2, OUTPUT);
  pinMode(motR1, OUTPUT);
  pinMode(motR2, OUTPUT);
}

void loop(){
  if(analogRead(S3)>1000 && analogRead(S2)<100 && analogRead(S4)<100){
    //move straight
    digitalWrite(motL1, HIGH);
    digitalWrite(motL2, LOW);
    digitalWrite(motR1, HIGH);
    digitalWrite(motR2, LOW);
    delay(500);

   }

   else if(analogRead(S3)>1000 && analogRead(S2)<100 && analogRead(S4)>1000){
    //turn  right
    digitalWrite(motL1, HIGH);
    digitalWrite(motL2, LOW);
    digitalWrite(motR1, LOW);
    digitalWrite(motR2, HIGH);
    delay(500);
    
   }

   else if(analogRead(S3)>1000 && analogRead(S2)>1000 && analogRead(S4)<100){
    //turn  right
    digitalWrite(motL1, HIGH);
    digitalWrite(motL2, LOW);
    digitalWrite(motR1, LOW);
    digitalWrite(motR2, HIGH);
    delay(500);
    
   }

}
