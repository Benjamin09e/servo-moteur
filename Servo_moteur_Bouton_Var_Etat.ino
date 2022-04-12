# include <Servo.h>
Servo pince; 
int fermer= 45, ouvert= 135, Bouton= 5, Etat=0;
void setup() {
pinMode(Bouton, INPUT);
pince.attach(9);
pince.write(90);
Serial.begin(9600);
}

void loop() {
 
 if(digitalRead(Bouton)==1)
 { 
   delay(400);
   if (Etat==0) Etat=1;
   else Etat=0;
   Serial.println(Etat);
   
  }
if (Etat==0) pince.write(fermer);
else pince.write(ouvert);

}
