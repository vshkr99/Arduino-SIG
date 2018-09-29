#define LED 13          //using macros
#define PUSH 2

void setup(){
     pinMode(LED,OUTPUT);
  	 pinMode(PUSH,INPUT);
}

void loop(){
  digitalWrite(LED,0);
  if(digitalRead(PUSH)==1){
  	digitalWrite(LED,1);
  }else if(digitalRead(PUSH)==0){
  	digitalWrite(LED,0);
  }
}
