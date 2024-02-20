/*
Ein und Ausgabe von drei Ganzzahlen (Integer)

Ausgabe:

Bitte geben Sie diese drei Ganzenzahlen nacheinander ein: 32 64 128
32
64
128
Zahl 3:  128
Zahl 2:   64
Zahl 1:   32

******************************************************************************************************************/

#include <stdio.h>

int main(int argc, char* argv[])
{
    // Abzufragende Variablen
    int Zahl1 = 0;
    int Zahl2 = 0;
    int Zahl3 = 0;

    //Aufforderung zur eingabe 
    printf("Bitte geben Sie diese drei Ganzenzahlen nacheinander ein: 32 64 128\n");
    
    //Zahlen abfrage
    scanf("%d\n", &Zahl1);
    scanf("%d\n", &Zahl2);
    scanf("%d", &Zahl3);
    
    //Ausgabe der Zahlen
    printf("Zahl 3:%5d\nZahl 2:%5d\nZahl 1:%5d\n ", Zahl3, Zahl2, Zahl1);
    return 0;
}
