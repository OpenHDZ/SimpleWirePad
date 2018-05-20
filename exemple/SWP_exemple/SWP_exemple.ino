/*
 SimpleWirePad simple demo
  
 Demonstrates the use of keypad with à simple wire
 
 write by Areour Mohamed Cherif
 Date : 20/05/2018
 E-mail : openhardwaredz@gmail.com

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.
This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <SimpleWirePad.h>
#include <LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

// the pin to connect the wire from keypad
const int analogInPin = A0;

// instance of the SimpleWirePad
SimpleWirePad swp(A0);

void setup() {
  // begin lcd and serial
  lcd.begin(16, 2);
  Serial.begin(9600);
}

void loop() {
  lcd.setCursor(0, 1);

  // read and desplay value from the keypad on LCD and Serial
  lcd.print(swp.padRead());
  Serial.println(swp.padRead());
}
