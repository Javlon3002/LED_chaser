
int clockPin = 2;
int latchPin = 3;
int dataPin = 4;
void setup() {

pinMode(latchPin, OUTPUT);
pinMode(dataPin, OUTPUT);
pinMode(clockPin, OUTPUT);

}

void loop() {





for(int rate_delay = 200; rate_delay > 0; rate_delay = rate_delay-40){

if( rate_delay == 80 ){

  for(int i=0;i<3;i++){
    
// For the first shift registerer 
digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,128);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
digitalWrite(latchPin, HIGH);
delay(rate_delay);
  
digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,64);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
digitalWrite(latchPin, HIGH);
delay(rate_delay);  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,32);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
digitalWrite(latchPin, HIGH);
delay(rate_delay);
  
digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,16);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
digitalWrite(latchPin, HIGH);
delay(rate_delay);  


digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,8);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
digitalWrite(latchPin, HIGH);
delay(rate_delay);
  
digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,4);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
digitalWrite(latchPin, HIGH);
delay(rate_delay);  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,2);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
digitalWrite(latchPin, HIGH);
delay(rate_delay);  


digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,1);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
digitalWrite(latchPin, HIGH);
delay(rate_delay);  



// For  the second shift registerer 
 
digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,128);
shiftOut(dataPin, clockPin, MSBFIRST,0);
digitalWrite(latchPin, HIGH);
delay(rate_delay);
  
digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,64);
shiftOut(dataPin, clockPin, MSBFIRST,0);
digitalWrite(latchPin, HIGH);
delay(rate_delay);  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,32);
shiftOut(dataPin, clockPin, MSBFIRST,0);
digitalWrite(latchPin, HIGH);
delay(rate_delay);
  
digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,16);
shiftOut(dataPin, clockPin, MSBFIRST,0);
digitalWrite(latchPin, HIGH);
delay(rate_delay);  


digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,8);
shiftOut(dataPin, clockPin, MSBFIRST,0);
digitalWrite(latchPin, HIGH);
delay(rate_delay);
  
digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,4);
shiftOut(dataPin, clockPin, MSBFIRST,0);
digitalWrite(latchPin, HIGH);
delay(rate_delay);  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,2);
shiftOut(dataPin, clockPin, MSBFIRST,0);
digitalWrite(latchPin, HIGH);
delay(rate_delay);  


digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,1);
shiftOut(dataPin, clockPin, MSBFIRST,0);
digitalWrite(latchPin, HIGH);
delay(rate_delay);  



// For  the third shift registerer 
digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,128);
digitalWrite(latchPin, HIGH);
delay(rate_delay);
  
digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,64);
digitalWrite(latchPin, HIGH);
delay(rate_delay);  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,32);
digitalWrite(latchPin, HIGH);
delay(rate_delay);
  
digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,16);
digitalWrite(latchPin, HIGH);
delay(rate_delay);  


digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,8);
digitalWrite(latchPin, HIGH);
delay(rate_delay);
  
digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,4);
digitalWrite(latchPin, HIGH);
delay(rate_delay);  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,2);
digitalWrite(latchPin, HIGH);
delay(rate_delay);  


digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,1);
digitalWrite(latchPin, HIGH);
delay(rate_delay);  

  }
  
}
else if(rate_delay ==  40){

for(int i=0;i<6;i++){

 // For the first shift registerer 
digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,128);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
digitalWrite(latchPin, HIGH);
delay(rate_delay);
  
digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,64);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
digitalWrite(latchPin, HIGH);
delay(rate_delay);  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,32);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
digitalWrite(latchPin, HIGH);
delay(rate_delay);
  
digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,16);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
digitalWrite(latchPin, HIGH);
delay(rate_delay);  


digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,8);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
digitalWrite(latchPin, HIGH);
delay(rate_delay);
  
digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,4);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
digitalWrite(latchPin, HIGH);
delay(rate_delay);  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,2);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
digitalWrite(latchPin, HIGH);
delay(rate_delay);  


digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,1);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
digitalWrite(latchPin, HIGH);
delay(rate_delay);  



// For  the second shift registerer 

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,128);
shiftOut(dataPin, clockPin, MSBFIRST,0);
digitalWrite(latchPin, HIGH);
delay(rate_delay);
  
digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,64);
shiftOut(dataPin, clockPin, MSBFIRST,0);
digitalWrite(latchPin, HIGH);
delay(rate_delay);  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,32);
shiftOut(dataPin, clockPin, MSBFIRST,0);
digitalWrite(latchPin, HIGH);
delay(rate_delay);
  
digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,16);
shiftOut(dataPin, clockPin, MSBFIRST,0);
digitalWrite(latchPin, HIGH);
delay(rate_delay);  


digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,8);
shiftOut(dataPin, clockPin, MSBFIRST,0);
digitalWrite(latchPin, HIGH);
delay(rate_delay);
  
digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,4);
shiftOut(dataPin, clockPin, MSBFIRST,0);
digitalWrite(latchPin, HIGH);
delay(rate_delay);  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,2);
shiftOut(dataPin, clockPin, MSBFIRST,0);
digitalWrite(latchPin, HIGH);
delay(rate_delay);  


digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,1);
shiftOut(dataPin, clockPin, MSBFIRST,0);
digitalWrite(latchPin, HIGH);
delay(rate_delay);  


// For  the third shift registerer 

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,128);
digitalWrite(latchPin, HIGH);
delay(rate_delay);
  
digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,64);
digitalWrite(latchPin, HIGH);
delay(rate_delay);  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,32);
digitalWrite(latchPin, HIGH);
delay(rate_delay);
  
digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,16);
digitalWrite(latchPin, HIGH);
delay(rate_delay);  


digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,8);
digitalWrite(latchPin, HIGH);
delay(rate_delay);
  
digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,4);
digitalWrite(latchPin, HIGH);
delay(rate_delay);  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,2);
digitalWrite(latchPin, HIGH);
delay(rate_delay);  


digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,1);
digitalWrite(latchPin, HIGH);
delay(rate_delay);   
}
 
}


// For the first shift registerer 
digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,128);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
digitalWrite(latchPin, HIGH);
delay(rate_delay);
  
digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,64);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
digitalWrite(latchPin, HIGH);
delay(rate_delay);  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,32);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
digitalWrite(latchPin, HIGH);
delay(rate_delay);
  
digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,16);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
digitalWrite(latchPin, HIGH);
delay(rate_delay);  


digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,8);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
digitalWrite(latchPin, HIGH);
delay(rate_delay);
  
digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,4);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
digitalWrite(latchPin, HIGH);
delay(rate_delay);  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,2);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
digitalWrite(latchPin, HIGH);
delay(rate_delay);  


digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,1);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
digitalWrite(latchPin, HIGH);
delay(rate_delay);  


// For  the second shift registerer 

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,128);
shiftOut(dataPin, clockPin, MSBFIRST,0);
digitalWrite(latchPin, HIGH);
delay(rate_delay);
  
digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,64);
shiftOut(dataPin, clockPin, MSBFIRST,0);
digitalWrite(latchPin, HIGH);
delay(rate_delay);  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,32);
shiftOut(dataPin, clockPin, MSBFIRST,0);
digitalWrite(latchPin, HIGH);
delay(rate_delay);
  
digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,16);
shiftOut(dataPin, clockPin, MSBFIRST,0);
digitalWrite(latchPin, HIGH);
delay(rate_delay);  


digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,8);
shiftOut(dataPin, clockPin, MSBFIRST,0);
digitalWrite(latchPin, HIGH);
delay(rate_delay);
  
digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,4);
shiftOut(dataPin, clockPin, MSBFIRST,0);
digitalWrite(latchPin, HIGH);
delay(rate_delay);  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,2);
shiftOut(dataPin, clockPin, MSBFIRST,0);
digitalWrite(latchPin, HIGH);
delay(rate_delay);  


digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,1);
shiftOut(dataPin, clockPin, MSBFIRST,0);
digitalWrite(latchPin, HIGH);
delay(rate_delay);  


// For  the third shift registerer 

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,128);
digitalWrite(latchPin, HIGH);
delay(rate_delay);
  
digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,64);
digitalWrite(latchPin, HIGH);
delay(rate_delay);  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,32);
digitalWrite(latchPin, HIGH);
delay(rate_delay);
  
digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,16);
digitalWrite(latchPin, HIGH);
delay(rate_delay);  


digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,8);
digitalWrite(latchPin, HIGH);
delay(rate_delay);
  
digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,4);
digitalWrite(latchPin, HIGH);
delay(rate_delay);  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,2);
digitalWrite(latchPin, HIGH);
delay(rate_delay);  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,1);
digitalWrite(latchPin, HIGH);
delay(rate_delay);  

}




















for(int rate_delay = 200; rate_delay > 0; rate_delay = rate_delay-40){

if( rate_delay == 80 ){

  for(int i=0;i<3;i++){
    
// For the first shift registerer 
digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,1);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
digitalWrite(latchPin, HIGH);
delay(rate_delay);
  
digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,2);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
digitalWrite(latchPin, HIGH);
delay(rate_delay);  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,4);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
digitalWrite(latchPin, HIGH);
delay(rate_delay);
  
digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,8);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
digitalWrite(latchPin, HIGH);
delay(rate_delay);  


digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,16);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
digitalWrite(latchPin, HIGH);
delay(rate_delay);
  
digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,32);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
digitalWrite(latchPin, HIGH);
delay(rate_delay);  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,64);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
digitalWrite(latchPin, HIGH);
delay(rate_delay);  


digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,128);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
digitalWrite(latchPin, HIGH);
delay(rate_delay);  



// For  the third shift registerer 

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,1);
digitalWrite(latchPin, HIGH);
delay(rate_delay);
  
digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,2);
digitalWrite(latchPin, HIGH);
delay(rate_delay);  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,4);
digitalWrite(latchPin, HIGH);
delay(rate_delay);
  
digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,8);

digitalWrite(latchPin, HIGH);
delay(rate_delay);  


digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,16);
digitalWrite(latchPin, HIGH);
delay(rate_delay);
  
digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,32);
digitalWrite(latchPin, HIGH);
delay(rate_delay);  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,64);
digitalWrite(latchPin, HIGH);
delay(rate_delay);  


digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,128);
digitalWrite(latchPin, HIGH);
delay(rate_delay);  



// For  the second shift registerer 

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,1);
shiftOut(dataPin, clockPin, MSBFIRST,0);

digitalWrite(latchPin, HIGH);
delay(rate_delay);
  
digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,2);
shiftOut(dataPin, clockPin, MSBFIRST,0);

digitalWrite(latchPin, HIGH);
delay(rate_delay);  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,4);
shiftOut(dataPin, clockPin, MSBFIRST,0);

digitalWrite(latchPin, HIGH);
delay(rate_delay);
  
digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,8);
shiftOut(dataPin, clockPin, MSBFIRST,0);
digitalWrite(latchPin, HIGH);
delay(rate_delay);  


digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,16);
shiftOut(dataPin, clockPin, MSBFIRST,0);
digitalWrite(latchPin, HIGH);
delay(rate_delay);
  
digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,32);
shiftOut(dataPin, clockPin, MSBFIRST,0);
digitalWrite(latchPin, HIGH);
delay(rate_delay);  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,64);
shiftOut(dataPin, clockPin, MSBFIRST,0);
digitalWrite(latchPin, HIGH);
delay(rate_delay);  


digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,128);
shiftOut(dataPin, clockPin, MSBFIRST,0);
digitalWrite(latchPin, HIGH);
delay(rate_delay);  

  }
  
}
else if(rate_delay ==  40){

for(int i=0;i<6;i++){

 // For the first shift registerer 
digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,1);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
digitalWrite(latchPin, HIGH);
delay(rate_delay);
  
digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,2);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
digitalWrite(latchPin, HIGH);
delay(rate_delay);  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,4);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
digitalWrite(latchPin, HIGH);
delay(rate_delay);
  
digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,8);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
digitalWrite(latchPin, HIGH);
delay(rate_delay);  


digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,16);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
digitalWrite(latchPin, HIGH);
delay(rate_delay);
  
digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,32);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
digitalWrite(latchPin, HIGH);
delay(rate_delay);  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,64);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
digitalWrite(latchPin, HIGH);
delay(rate_delay);  


digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,128);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
digitalWrite(latchPin, HIGH);
delay(rate_delay);  



// For  the third shift registerer 

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,1);
digitalWrite(latchPin, HIGH);
delay(rate_delay);
  
digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,2);
digitalWrite(latchPin, HIGH);
delay(rate_delay);  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,4);
digitalWrite(latchPin, HIGH);
delay(rate_delay);
  
digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,8);

digitalWrite(latchPin, HIGH);
delay(rate_delay);  


digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,16);
digitalWrite(latchPin, HIGH);
delay(rate_delay);
  
digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,32);
digitalWrite(latchPin, HIGH);
delay(rate_delay);  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,64);
digitalWrite(latchPin, HIGH);
delay(rate_delay);  


digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,128);
digitalWrite(latchPin, HIGH);
delay(rate_delay);  



// For  the second shift registerer 

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,1);
shiftOut(dataPin, clockPin, MSBFIRST,0);

digitalWrite(latchPin, HIGH);
delay(rate_delay);
  
digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,2);
shiftOut(dataPin, clockPin, MSBFIRST,0);

digitalWrite(latchPin, HIGH);
delay(rate_delay);  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,4);
shiftOut(dataPin, clockPin, MSBFIRST,0);

digitalWrite(latchPin, HIGH);
delay(rate_delay);
  
digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,8);
shiftOut(dataPin, clockPin, MSBFIRST,0);
digitalWrite(latchPin, HIGH);
delay(rate_delay);  


digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,16);
shiftOut(dataPin, clockPin, MSBFIRST,0);
digitalWrite(latchPin, HIGH);
delay(rate_delay);
  
digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,32);
shiftOut(dataPin, clockPin, MSBFIRST,0);
digitalWrite(latchPin, HIGH);
delay(rate_delay);  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,64);
shiftOut(dataPin, clockPin, MSBFIRST,0);
digitalWrite(latchPin, HIGH);
delay(rate_delay);  


digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,128);
shiftOut(dataPin, clockPin, MSBFIRST,0);
digitalWrite(latchPin, HIGH);
delay(rate_delay);
}
 
}


// For the first shift registerer 
digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,1);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
digitalWrite(latchPin, HIGH);
delay(rate_delay);
  
digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,2);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
digitalWrite(latchPin, HIGH);
delay(rate_delay);  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,4);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
digitalWrite(latchPin, HIGH);
delay(rate_delay);
  
digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,8);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
digitalWrite(latchPin, HIGH);
delay(rate_delay);  


digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,16);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
digitalWrite(latchPin, HIGH);
delay(rate_delay);
  
digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,32);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
digitalWrite(latchPin, HIGH);
delay(rate_delay);  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,64);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
digitalWrite(latchPin, HIGH);
delay(rate_delay);  


digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,128);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
digitalWrite(latchPin, HIGH);
delay(rate_delay);  



// For  the third shift registerer 

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,1);
digitalWrite(latchPin, HIGH);
delay(rate_delay);
  
digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,2);
digitalWrite(latchPin, HIGH);
delay(rate_delay);  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,4);
digitalWrite(latchPin, HIGH);
delay(rate_delay);
  
digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,8);

digitalWrite(latchPin, HIGH);
delay(rate_delay);  


digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,16);
digitalWrite(latchPin, HIGH);
delay(rate_delay);
  
digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,32);
digitalWrite(latchPin, HIGH);
delay(rate_delay);  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,64);
digitalWrite(latchPin, HIGH);
delay(rate_delay);  


digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,128);
digitalWrite(latchPin, HIGH);
delay(rate_delay);  



// For  the second shift registerer 

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,1);
shiftOut(dataPin, clockPin, MSBFIRST,0);

digitalWrite(latchPin, HIGH);
delay(rate_delay);
  
digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,2);
shiftOut(dataPin, clockPin, MSBFIRST,0);

digitalWrite(latchPin, HIGH);
delay(rate_delay);  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,4);
shiftOut(dataPin, clockPin, MSBFIRST,0);

digitalWrite(latchPin, HIGH);
delay(rate_delay);
  
digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,8);
shiftOut(dataPin, clockPin, MSBFIRST,0);
digitalWrite(latchPin, HIGH);
delay(rate_delay);  


digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,16);
shiftOut(dataPin, clockPin, MSBFIRST,0);
digitalWrite(latchPin, HIGH);
delay(rate_delay);
  
digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,32);
shiftOut(dataPin, clockPin, MSBFIRST,0);
digitalWrite(latchPin, HIGH);
delay(rate_delay);  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,64);
shiftOut(dataPin, clockPin, MSBFIRST,0);
digitalWrite(latchPin, HIGH);
delay(rate_delay);  


digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,0);
shiftOut(dataPin, clockPin, MSBFIRST,128);
shiftOut(dataPin, clockPin, MSBFIRST,0);
digitalWrite(latchPin, HIGH);
delay(rate_delay);
}





}
