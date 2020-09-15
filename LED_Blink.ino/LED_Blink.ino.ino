+/*
 *Funktion: LED blinkt im ein Seknuden takt.
 *Programierer: Ole Riehemann
 *letzte Änderung: 11.09.2020
 *Version: 0.0.2
 *
 *Hardware: Grüne LED an Pin 3 mit Widerstand
 *
 */
 



void setup()
{
  pinMode(9, OUTPUT);    //LED grün
  Serial.begin(9600);    //Zur Kontrolle

}

void loop()
{
  /************* LED im Sekundentakt an und aus *************/
  digitalWrite(3, HIGH);     // LED An
  Serial.println("LED an");
  delay(1000);               //Sekundetakt
  digitalWrite(3, LOW);
  Serial.println("LED aus");
  delay(1000);

}
