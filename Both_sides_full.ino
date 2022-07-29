int clockPin = 2;
int latchPin = 3;
int dataPin = 4;

int rate_delay = 50;
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

String str1 = "10000000";  
String str2 = "00000000";  
String str3 = "00000000";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);



str1 = "01000000";  
str2 = "00000000";  
str3 = "00000001";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);


str1 = "00100000";  
str2 = "00000000";  
str3 = "00000010";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);


str1 = "00010000";  
str2 = "00000000";  
str3 = "00000100";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);


str1 = "00001000";  
str2 = "00000000";  
str3 = "00001000";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);


str1 = "00000100";  
str2 = "00000000";  
str3 = "00010000";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);

str1 = "00000010";  
str2 = "00000000";  
str3 = "00100000";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);

str1 = "00000001";  
str2 = "00000000";  
str3 = "01000000";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);


str1 = "00000000";  
str2 = "10000000";  
str3 = "10000000";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);

str1 = "00000000";  
str2 = "01000001";  
str3 = "00000000";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);

str1 = "00000000";  
str2 = "00100010";  
str3 = "00000000";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);


str1 = "00000000";  
str2 = "00010100";  
str3 = "00000000";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);



/////////////////////////////////////////////////////////////////

str1 = "00000000";  
str2 = "00001000";  
str3 = "00000000";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);


///////////////////////////////////////////////////////////////


str1 = "10000000";  
str2 = "00001000";  
str3 = "00000000";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);



str1 = "01000000";  
str2 = "00001000";  
str3 = "00000001";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);


str1 = "00100000";  
str2 = "00001000";  
str3 = "00000010";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);


str1 = "00010000";  
str2 = "00001000";  
str3 = "00000100";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);


str1 = "00001000";  
str2 = "00001000";  
str3 = "00001000";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);


str1 = "00000100";  
str2 = "00001000";  
str3 = "00010000";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);

str1 = "00000010";  
str2 = "00001000";  
str3 = "00100000";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);

str1 = "00000001";  
str2 = "00001000";  
str3 = "01000000";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);


str1 = "00000000";  
str2 = "10001000";  
str3 = "10000000";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);

str1 = "00000000";  
str2 = "01001001";  
str3 = "00000000";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);

str1 = "00000000";  
str2 = "00101010";  
str3 = "00000000";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);


str1 = "00000000";  
str2 = "00011100";  
str3 = "00000000";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);

//////////////////////////////////////////////////////////////


str1 = "10000000";  
str2 = "00011100";  
str3 = "00000000";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);



str1 = "01000000";  
str2 = "00011100";  
str3 = "00000001";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);


str1 = "00100000";  
str2 = "00011100";  
str3 = "00000010";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);


str1 = "00010000";  
str2 = "00011100";  
str3 = "00000100";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);


str1 = "00001000";  
str2 = "00011100";  
str3 = "00001000";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);


str1 = "00000100";  
str2 = "00011100";  
str3 = "00010000";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);

str1 = "00000010";  
str2 = "00011100";  
str3 = "00100000";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);

str1 = "00000001";  
str2 = "00011100";  
str3 = "01000000";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);


str1 = "00000000";  
str2 = "10011100";  
str3 = "10000000";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);

str1 = "00000000";  
str2 = "01011101";  
str3 = "00000000";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);

str1 = "00000000";  
str2 = "00111110";  
str3 = "00000000";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);

//////////////////////////////////////////////////////////////////////



str1 = "10000000";  
str2 = "00111110";  
str3 = "00000000";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);



str1 = "01000000";  
str2 = "00111110";  
str3 = "00000001";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);


str1 = "00100000";  
str2 = "00111110";  
str3 = "00000010";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);


str1 = "00010000";  
str2 = "00111110";  
str3 = "00000100";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);


str1 = "00001000";  
str2 = "00111110";  
str3 = "00001000";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);


str1 = "00000100";  
str2 = "00111110";  
str3 = "00010000";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);

str1 = "00000010";  
str2 = "00111110";  
str3 = "00100000";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);

str1 = "00000001";  
str2 = "00111110";  
str3 = "01000000";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);


str1 = "00000000";  
str2 = "10111110";  
str3 = "10000000";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);

str1 = "00000000";  
str2 = "01111111";  
str3 = "00000000";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



str1 = "10000000";  
str2 = "01111111";  
str3 = "00000000";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);



str1 = "01000000";  
str2 = "01111111";  
str3 = "00000001";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);


str1 = "00100000";  
str2 = "01111111";  
str3 = "00000010";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);


str1 = "00010000";  
str2 = "01111111";  
str3 = "00000100";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);


str1 = "00001000";  
str2 = "01111111";  
str3 = "00001000";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);


str1 = "00000100";  
str2 = "01111111";  
str3 = "00010000";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);

str1 = "00000010";  
str2 = "01111111";  
str3 = "00100000";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);

str1 = "00000001";  
str2 = "01111111";  
str3 = "01000000";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);


str1 = "00000000";  
str2 = "11111111";  
str3 = "10000000";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);


///////////////////////////////////////////////////////////////////////////////////////////////////////////



str1 = "10000000";  
str2 = "11111111";  
str3 = "10000000";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);



str1 = "01000000";  
str2 = "11111111";  
str3 = "10000001";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);


str1 = "00100000";  
str2 = "11111111";  
str3 = "10000010";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);


str1 = "00010000";  
str2 = "11111111";  
str3 = "10000100";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);


str1 = "00001000";  
str2 = "11111111";  
str3 = "10001000";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);


str1 = "00000100";  
str2 = "11111111";  
str3 = "10010000";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);

str1 = "00000010";  
str2 = "11111111";  
str3 = "10100000";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);

str1 = "00000001";  
str2 = "11111111";  
str3 = "11000000";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);


///////////////////////////////////////////////////////////////////////////////////////////

str1 = "10000000";  
str2 = "11111111";  
str3 = "11000000";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);



str1 = "01000000";  
str2 = "11111111";  
str3 = "11000001";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);


str1 = "00100000";  
str2 = "11111111";  
str3 = "11000010";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);


str1 = "00010000";  
str2 = "11111111";  
str3 = "11000100";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);


str1 = "00001000";  
str2 = "11111111";  
str3 = "11001000";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);


str1 = "00000100";  
str2 = "11111111";  
str3 = "11010000";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);

str1 = "00000011";  
str2 = "11111111";  
str3 = "11100000";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);

////////////////////////////////////////////////////////////////////////////////////////////



str1 = "10000011";  
str2 = "11111111";  
str3 = "11100000";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);



str1 = "01000011";  
str2 = "11111111";  
str3 = "11100001";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);


str1 = "00100011";  
str2 = "11111111";  
str3 = "11100010";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);


str1 = "00010011";  
str2 = "11111111";  
str3 = "11100100";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);


str1 = "00001011";  
str2 = "11111111";  
str3 = "11101000";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);


str1 = "00000111";  
str2 = "11111111";  
str3 = "11110000";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);


///////////////////////////////////////////////////////////////////////////////////////////////////////////

str1 = "10000111";  
str2 = "11111111";  
str3 = "11110000";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);



str1 = "01000111";  
str2 = "11111111";  
str3 = "11110001";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);


str1 = "00100111";  
str2 = "11111111";  
str3 = "11110010";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);


str1 = "00010111";  
str2 = "11111111";  
str3 = "11110100";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);


str1 = "00001111";  
str2 = "11111111";  
str3 = "11111000";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);



////////////////////////////////////////////////////////////////////////////////////////////////




str1 = "10001111";  
str2 = "11111111";  
str3 = "11111000";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);



str1 = "01001111";  
str2 = "11111111";  
str3 = "11111001";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);


str1 = "00101111";  
str2 = "11111111";  
str3 = "11111010";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);


str1 = "00011111";  
str2 = "11111111";  
str3 = "11111100";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);

/////////////////////////////////////////////////////////////////////////////////////////////////


str1 = "10011111";  
str2 = "11111111";  
str3 = "11111100";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);



str1 = "01011111";  
str2 = "11111111";  
str3 = "11111101";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);


str1 = "00111111";  
str2 = "11111111";  
str3 = "11111110";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);

//////////////////////////////////////////////////////////////////////////////////////


str1 = "10111111";  
str2 = "11111111";  
str3 = "11111110";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);



str1 = "01111111";  
str2 = "11111111";  
str3 = "11111111";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);

////////////////////////////////////////////////////////////////////

str1 = "11111111";  
str2 = "11111111";  
str3 = "11111111";  

digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str1));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str2));
shiftOut(dataPin, clockPin, MSBFIRST,send_data(str3));
digitalWrite(latchPin, HIGH);
delay(rate_delay);





}



