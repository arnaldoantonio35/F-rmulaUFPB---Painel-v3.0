
unsigned int potenciometro;
unsigned int pwm;
int i = 0;

void setup(){
  
  pinMode(3,OUTPUT);

  analogWrite(3, 0);

  while(i <= 255){
    
    i = i + 10;
    analogWrite(3, (i));
    delay(28);

    if(i > 255){
      analogWrite(3, 255);
        delay(1000);
      analogWrite(3, 0);
      
      }
    
   }


   
/*

analogWrite(3, 255);

  delay(1500);

analogWrite(3, 0);
*/
}

void LEDS(){
  
   potenciometro = analogRead(A0);
   pwm = map(potenciometro,0,1023,0,255);
   analogWrite(3,pwm); 
  
  }

void Pisca(){
  
  analogWrite(3, 0);

  delay(150);

  analogWrite(3, 255);

  delay(100);
  
  }  

void loop() {

  LEDS();

  if(pwm >= 255){
    Pisca();
  }else
    false;
  
}
