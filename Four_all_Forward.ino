
int clockPin = 2;
int latchPin = 3;
int dataPin = 4;

int rate_delay = 150;
int send_data(String str){

int result = 0;
if(str[0]=='1') result = result+ pow(2,7);
if(str[1]=='1') result = result+ pow(2,6);
if(str[2]=='1') result = result+ pow(2,5);
if(str[3]=='1') result = result+ pow(2,4);
if(str[4]=='1') result = result+ pow(2,3);
if(str[5]=='1') result = result+ pow(2,2);
if(str[6]=='1') result = result+ pow(2,1);
if(str[7]=='1') result = result+ pow(2,0);

return result;
}


void setup() {
  // put your setup code here, to run once:

pinMode(latchPin, OUTPUT);
pinMode(dataPin, OUTPUT);
pinMode(clockPin, OUTPUT);
Serial.begin(9600);
}

void loop() {

String str1 = "10000010";  
String str2 = "00001000";  
String str3 = "00100000";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);


str1 = "01000001";  
str2 = "00000100";  
str3 = "00010000";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);


str1 = "00100000";  
str2 = "10000010";  
str3 = "00001000";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);



str1 = "00010000";  
str2 = "01000001";  
str3 = "00000100";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);


str1 = "00001000";  
str2 = "00100000";  
str3 = "10000010";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);


str1 = "00000100";  
str2 = "00010000";  
str3 = "01000001";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);



}



