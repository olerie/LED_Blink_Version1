/*
 *Funktion: LED blinkt im ein Seknuden takt.
 *Programierer: Ole Riehemann
 *letzte Änderung: 11.09.2020
 *Version: 0.0.2
 *
 *Hardware: Grüne LED an Pin 3 mit Widerstand
 *
 */
 

#define grueneLED 3

void setup()
{
  pinMode(grueneLED, OUTPUT);    //LED grün
  Serial.begin(9600);    //Zur Kontrolle

}

void loop()
{
  /************* LED im Sekundentakt an und aus *************/
  digitalWrite(grueneLED, HIGH);     // LED An
  Serial.println("LED an");
  delay(1000);               //Sekundetakt
  digitalWrite(grueneLED, LOW);
  Serial.println("LED aus");
  delay(1000);

}
