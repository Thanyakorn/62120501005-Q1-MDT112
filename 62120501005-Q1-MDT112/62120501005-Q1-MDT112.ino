int Buzzer = 8;
void setup(){
    
    pinMode(Buzzer, OUTPUT);

    pinMode(3,OUTPUT);
    pinMode(4,OUTPUT);
    pinMode(5,OUTPUT);
    pinMode(6,OUTPUT);
    pinMode(7,OUTPUT);
    pinMode(9,OUTPUT);
    pinMode(10,OUTPUT);
    pinMode(11,OUTPUT);
    pinMode(12,OUTPUT);
    pinMode(13,OUTPUT);
    
    
    

}
void loop(){
    tone(Buzzer,200,500);
    delay(250);
    tone(Buzzer,400,100);

    digitalWrite(3,HIGH);  
    delay(100);  
    digitalWrite(3,LOW);

    digitalWrite(4,HIGH);
    delay(100);
    digitalWrite(4,LOW);

    digitalWrite(5,HIGH);
    delay(100);
    digitalWrite(5,LOW);

    digitalWrite(6,HIGH);   
    delay(100); 
    digitalWrite(6,LOW);

    digitalWrite(7,HIGH);
    delay(100);
    digitalWrite(7,LOW);

    digitalWrite(9,HIGH);   
    delay(100);
    digitalWrite(9,LOW);

    digitalWrite(10,HIGH);
    delay(100);
    digitalWrite(10,LOW);

    digitalWrite(11,HIGH);
    delay(100);
    digitalWrite(11,LOW);

    digitalWrite(12,HIGH);
    delay(100);   
    digitalWrite(12,LOW);

    digitalWrite(13,HIGH);
    delay(100);
    digitalWrite(13,LOW);




    digitalWrite(13,HIGH);  
    delay(100);  
    digitalWrite(13,LOW);

    digitalWrite(12,HIGH);  
    delay(100);  
    digitalWrite(12,LOW);

    digitalWrite(11,HIGH);
    delay(100);
    digitalWrite(11,LOW);

    digitalWrite(10,HIGH);
    delay(100);
    digitalWrite(10,LOW);

    digitalWrite(9,HIGH);   
    delay(100); 
    digitalWrite(9,LOW);

    digitalWrite(7,HIGH);
    delay(100);
    digitalWrite(7,LOW);

    digitalWrite(6,HIGH);   
    delay(100);
    digitalWrite(6,LOW);

    digitalWrite(5,HIGH);
    delay(100);
    digitalWrite(5,LOW);

    digitalWrite(4,HIGH);
    delay(100);
    digitalWrite(4,LOW);

    digitalWrite(3,HIGH);
    delay(100);   
    digitalWrite(3,LOW);

    

    

}