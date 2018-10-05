
//open up Serial monitor/plotter after uploading this code
//Selection of analog pin 0 for input

void setup(){
   Serial.begin(9600);
   pinMode(A0,INPUT);
}

void loop(){
   float x=analogRead(A0);
   Serial.print("Voltage : ");
   Serial.println((x/1024.0)*5);
}
