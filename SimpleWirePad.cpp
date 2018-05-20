/*
la libraire SimpleWirePad qui simplifie et economise les pins nesaisaire a l'utilisation d'un KeyPad(3*4).

Ecrit par Areour Mohamed Cherif
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
along with this program.  If not, see <http://www.gnu.org/licenses/>.*/


#include "Arduino.h"
#include "SimpleWirePad.h"

SimpleWirePad::SimpleWirePad(int AnalogPin)
{
_AnalogPin = AnalogPin;
}

char SimpleWirePad :: padRead(){
	
	_readValue=analogRead(_AnalogPin);
  
	switch (_readValue) {
    case 931:
      return '1';
      break;
      
    case 913:
      return '2';
      break;

    case 895:
      return '3';
      break;

    case 853:
      return '4';
      break;

    case 838:
      return '5';
      break;

    case 823:
      return '6';
      break;

    case 788:
      return '7';
      break;

    case 775:
      return '8';
      break;

    case 762:
      return '9';
      break;

    case 731:
      return '*';
      break;

    case 720:
      return '0';
      break;

    case 709:
      return '#';
      break;

    default:
      return '$';
      break;
}
}
