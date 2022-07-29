int clockPin = 2;
int latchPin = 3;
int dataPin = 4;

//int rate_delay = 50;

void setup() {
  
pinMode(latchPin, OUTPUT);
pinMode(dataPin, OUTPUT);
pinMode(clockPin, OUTPUT);
Serial.begin(9600);

}

void loop() {
 
String str1 = "00000000";  
String str2 = "00000000";  
String str3 = "00000000";  


for(int i=0;i<3;i++){
for (int i=0;i<=8;i++){
digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, LSBFIRST, pow(2,i));
shiftOut(dataPin, clockPin, LSBFIRST,pow(2,i));
shiftOut(dataPin, clockPin, LSBFIRST,pow(2,i));
digitalWrite(latchPin, HIGH);
delay(300);
}
}


for(int i=0;i<3;i++){
for (int i=0;i<=8;i++){
digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, LSBFIRST, pow(2,i));
shiftOut(dataPin, clockPin, LSBFIRST,pow(2,i));
shiftOut(dataPin, clockPin, LSBFIRST,pow(2,i));
digitalWrite(latchPin, HIGH);
delay(250);
}
}


for(int i=0;i<3;i++){
for (int i=0;i<=8;i++){
digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, LSBFIRST, pow(2,i));
shiftOut(dataPin, clockPin, LSBFIRST,pow(2,i));
shiftOut(dataPin, clockPin, LSBFIRST,pow(2,i));
digitalWrite(latchPin, HIGH);
delay(200);
}
}


for(int i=0;i<4;i++){
for (int i=0;i<=8;i++){
digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, LSBFIRST, pow(2,i));
shiftOut(dataPin, clockPin, LSBFIRST,pow(2,i));
shiftOut(dataPin, clockPin, LSBFIRST,pow(2,i));
digitalWrite(latchPin, HIGH);
delay(150);
}
}




for(int i=0;i<5;i++){
for (int i=0;i<=8;i++){
digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, LSBFIRST, pow(2,i));
shiftOut(dataPin, clockPin, LSBFIRST,pow(2,i));
shiftOut(dataPin, clockPin, LSBFIRST,pow(2,i));
digitalWrite(latchPin, HIGH);
delay(100);
}
}


for(int i=0;i<6;i++){
for (int i=0;i<=8;i++){
digitalWrite(latchPin, LOW);  
shiftOut(dataPin, clockPin, LSBFIRST, pow(2,i));
shiftOut(dataPin, clockPin, LSBFIRST,pow(2,i));
shiftOut(dataPin, clockPin, LSBFIRST,pow(2,i));
digitalWrite(latchPin, HIGH);
delay(50);
}
}

}
