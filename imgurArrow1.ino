//set pins 2 through 17 as outputs
const int led1=2;
const int led2=3;
const int led3=4;
const int led4=5;
const int led5=6;
const int led6=7;
const int led7=8;
const int led8=9;
const int led9=10;
const int led10=11;
const int led11=12;
const int led12=13;
const int led13=14;
const int led14=15;
const int led15=16;
const int led16=17;

//set pin 18 as input
const int tiltPin=(18);
//set variable tilt state to false
int tiltState = 0;


void setup(){
    //begin serial for diagnostics for input
  Serial.begin(9600);
  //set pins as outputs
    pinMode(led1,OUTPUT);
    pinMode(led2,OUTPUT);
    pinMode(led3,OUTPUT);
    pinMode(led4,OUTPUT);
    pinMode(led5,OUTPUT);
    pinMode(led6,OUTPUT);
    pinMode(led7,OUTPUT);
    pinMode(led8,OUTPUT);
    pinMode(led9,OUTPUT);
    pinMode(led10,OUTPUT);
    pinMode(led11,OUTPUT);
    pinMode(led12,OUTPUT);
    pinMode(led13,OUTPUT);
    pinMode(led14,OUTPUT);
    pinMode(led15,OUTPUT);
    pinMode(led16,OUTPUT);
    
    //set tilt pin as input with internal pullup resistor
    pinMode(tiltPin,INPUT_PULLUP);
    
     // set all LEDs high to start with them off
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,HIGH);
    digitalWrite(led5,HIGH);
    digitalWrite(led6,HIGH);
    digitalWrite(led7,HIGH);
    digitalWrite(led8,HIGH);
    digitalWrite(led9,HIGH);
    digitalWrite(led10,HIGH);
    digitalWrite(led11,HIGH);
    digitalWrite(led12,HIGH);
    digitalWrite(led13,HIGH);
    digitalWrite(led14,HIGH);
    digitalWrite(led15,HIGH);
    digitalWrite(led16,HIGH);
    
    
    


}

void loop(){

  //set tilt state by reading tilt pin input
    tiltState=digitalRead(tiltPin);
    //print tilt state to serial to make sure you are getting correct signal
    Serial.println(tiltState);
    //you may have to change ==high to ==low depending on orientation of swith in box
    if (tiltState==HIGH){
        //make sure red leds are off
        digitalWrite(led10,HIGH);                
    digitalWrite(led11,HIGH);
    digitalWrite(led12,HIGH);
    digitalWrite(led13,HIGH);
    digitalWrite(led14,HIGH);
    digitalWrite(led15,HIGH);
    digitalWrite(led16,HIGH);
        //sweep green leds high
    digitalWrite(led1,LOW);
    delay(60);

    digitalWrite(led2,LOW);
            
   delay(60);

    digitalWrite(led3,LOW);
    delay(60);

    digitalWrite(led4,LOW);
    delay(60);

    digitalWrite(led5,LOW);
    delay(60);

    digitalWrite(led6,LOW);
    delay(60);

    digitalWrite(led7,LOW);
    delay(60);
    digitalWrite(led8,LOW);
   
   } 
   //you may have to change == low to ==high depending on orientation of swith in box
   if (tiltState == LOW){
     //make sure green leds are off
    digitalWrite(led1,HIGH);                
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,HIGH);
    digitalWrite(led5,HIGH);
    digitalWrite(led6,HIGH);
    digitalWrite(led7,HIGH);
    digitalWrite(led8,HIGH);
    //sweep red LEDs on
digitalWrite(led9,LOW);
       delay(60);

    digitalWrite(led10,LOW);
    delay(60);

    digitalWrite(led11,LOW);
    delay(60);

    digitalWrite(led12,LOW);
    delay(60);

    digitalWrite(led13,LOW);
    delay(60);

    digitalWrite(led14,LOW);
    delay(60);

    digitalWrite(led15,LOW);
    delay(60);

    digitalWrite(led16,LOW);
    

    
  }

}
