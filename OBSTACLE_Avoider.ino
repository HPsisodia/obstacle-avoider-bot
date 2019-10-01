void setup() {
  // put your setup code here, to run once:
pinMode(13, OUTPUT);
pinMode(12, OUTPUT);
pinMode(11, OUTPUT);
pinMode(10, OUTPUT);
pinMode(7, INPUT);
pinMode(8, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if((digitalRead(7)==1)&&(digitalRead(8)==0))
 {digitalWrite(13, HIGH);
digitalWrite(12, LOW);
digitalWrite(11, LOW);
digitalWrite(10, LOW);
}

else if((digitalRead(7)==0)&&(digitalRead(8)==1))
 {digitalWrite(13, LOW);
digitalWrite(12, LOW);
digitalWrite(11, HIGH);
digitalWrite(10, LOW);
 }
else if((digitalRead(7)==0)&&(digitalRead(8)==0))
 {digitalWrite(13, HIGH);
digitalWrite(12, LOW);
digitalWrite(11, HIGH);
digitalWrite(10, LOW);
 }
 
else if((digitalRead(7)==1)&&(digitalRead(8)==1))
{digitalWrite(13, LOW);
digitalWrite(12, HIGH);
digitalWrite(11, LOW);
digitalWrite(10, HIGH);
}
}
