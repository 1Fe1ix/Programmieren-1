/*

Ausgabe von einer Zeichen Kette (String), einer Ganzzahl (Integer), 
einer Fliesskommazahl (Float) und einer Fliesskommazahl mit vorgaben für die Anzahl von Nummern vor und nach dem Komma

Ausgabe:

String: Das ist eine Zeichenkette
Ganze Zahl: 42
Fliesskommazahl: 3.141500
Fliesskommazahl mit Formatangabe: 00003.142

*************************************************************************************************************************************************************/

#include <stdio.h>
int main()
{
    int Zahl1;

    printf("String: %s \n", "Das ist eine Zeichenkette");
    printf("Ganze Zahl: %i \n", 42);
    printf("Fliesskommazahl: %f \n", 3.1415);
    printf("Fliesskommazahl mit Formatangabe: %09.3f \n", 3.1415);
    
    return 0;
}
