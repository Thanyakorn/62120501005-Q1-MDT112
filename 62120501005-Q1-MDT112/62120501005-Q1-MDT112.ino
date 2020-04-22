void setup(){
    Serial.begin(9600);   
    pinMode(2,INPUT_PULLUP);
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


    tone(8,200,500);            
    delay(250);                
    tone(8,400,100);

}

  int L = 3;  int k = 0;  int s = 100;

void loop(){

    for (L = 3; L <= 13; L++)
    {
        if(L == 8)
        {
            digitalWrite(L,LOW);
            continue;
        }

        digitalWrite(L,HIGH);
        while (digitalRead(2) == 0)

        {   
            delay(100);
            if (digitalRead(2) == 1)
            {               
                k++;
                tone(8,400,100);        
                Serial.println("Faster X 2 Current Speed : X" + String(pow(2,k)));                       
                s = s/2;
            }
        }

        delay(s);
        digitalWrite(L,LOW);       
    }



    for (L = 13; L >= 3; L--)

    {
        if(L == 8)
        {
            digitalWrite(L,LOW);
            continue;
        }

        digitalWrite(L,HIGH);
        while (digitalRead(2) == 0)

        {   
            delay(100);
            if (digitalRead(2) == 1)
            {               
                k++;
                tone(8,400,100);        
                Serial.println("Faster X 2 Current Speed : X" + String(pow(2,k)));                             
                s = s/2;
            }
        }     

        delay(s);
        digitalWrite(L,LOW);         
    }
}