void setup(){
  Serial.begin(9600);
}

void loop(){
 
  if(Serial.available()>0){
    info=Serial.readString();
    if(info=="0"){
      Serial.println("OFF");
    }else if(info=="1"){
      Serial.println("ON");
    }
  }
  

  delay(1000);
}
