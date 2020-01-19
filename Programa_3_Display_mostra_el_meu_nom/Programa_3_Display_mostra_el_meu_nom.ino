/**********************************************************************************
**                                                                               **
**                              Display de 7 segments                            **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int ledA = 5;          // donar nom al pin 5 de l’Arduino
const int ledB = 6;          // donar nom al pin 6 de l’Arduino
const int ledC = 7;          // donar nom al pin 7 de l’Arduino
const int ledD = 8;          // donar nom al pin 8 de l’Arduino
const int ledE = 9;          // donar nom al pin 9 de l’Arduino
const int ledF = 10;         // donar nom al pin 10 de l’Arduino
const int ledG = 11;         // donar nom al pin 11 de l’Arduino
int a=1000;

//********** Setup ****************************************************************
void setup()
{
  pinMode(ledA, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(ledB, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(ledC, OUTPUT);     // definir el pin 7 com una sortida
  pinMode(ledD, OUTPUT);     // definir el pin 8 com una sortida
  pinMode(ledE, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(ledF, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(ledG, OUTPUT);     // definir el pin 11 com una sortida
  delay (a);
  
}

//********** Loop *****************************************************************
void loop()
{                            
  digitalWrite(ledA, LOW);    // posar a 5V el pin 5  O
  digitalWrite(ledB, LOW);    // posar a 5V el pin 6
  digitalWrite(ledC, LOW);    // posar a 5V el pin 7
  digitalWrite(ledD, LOW);    // posar a 5V el pin 8
  digitalWrite(ledE, LOW);    // posar a 5V el pin 9
  digitalWrite(ledF, LOW);    // posar a 5V el pin 10
  digitalWrite(ledG, HIGH);    // posar a0V el pin 11
  
  
  delay(a);                  // es queden leds 1000ms encesos
                             
  digitalWrite(ledA, HIGH);    // posar a 5V el pin 5   R
  digitalWrite(ledB, HIGH);    // posar a 5V el pin 6
  digitalWrite(ledC, HIGH);    // posar a 5V el pin 7
  digitalWrite(ledD, HIGH);    // posar a 5V el pin 8
  digitalWrite(ledE, LOW);    // posar a 5V el pin 9
  digitalWrite(ledF, HIGH);    // posar a 5V el pin 10
  digitalWrite(ledG, LOW);    // posar a 5V el pin 11
  
  
  delay(a);                  // es queden leds 1000ms encesos
                             
  digitalWrite(ledA, HIGH);    // posar a 5V el pin 5  I
  digitalWrite(ledB, HIGH);    // posar a 5V el pin 6
  digitalWrite(ledC, HIGH);    // posar a 5V el pin 7
  digitalWrite(ledD, HIGH);    // posar a 5V el pin 8
  digitalWrite(ledE, LOW);    // posar a 5V el pin 9
  digitalWrite(ledF, LOW);    // posar a 5V el pin 10
  digitalWrite(ledG, HIGH);    // posar a 5V el pin 11
  
  
  delay(a);                  // es queden leds 1000ms encesos
                              
  digitalWrite(ledA, LOW);    // posar a 5V el pin 5   O
  digitalWrite(ledB, LOW);    // posar a 5V el pin 6
  digitalWrite(ledC, LOW);    // posar a 5V el pin 7
  digitalWrite(ledD, LOW);    // posar a 5V el pin 8
  digitalWrite(ledE, LOW);    // posar a 5V el pin 9
  digitalWrite(ledF, LOW);    // posar a 5V el pin 10
  digitalWrite(ledG, HIGH);    // posar a 5V el pin 11
  
  
  delay(a);                  // es queden leds 1000ms encesos
                              
  digitalWrite(ledA, HIGH);    // posar a 5V el pin 5   L
  digitalWrite(ledB, HIGH);    // posar a 5V el pin 6
  digitalWrite(ledC, HIGH);    // posar a 5V el pin 7
  digitalWrite(ledD, LOW);    // posar a 5V el pin 8
  digitalWrite(ledE, LOW);    // posar a 5V el pin 9
  digitalWrite(ledF, LOW);    // posar a 5V el pin 10
  digitalWrite(ledG, HIGH);    // posar a 5V el pin 11
  
  
  delay(a);                  // es queden leds 1000ms encesos
                             
 

  }
  
 
