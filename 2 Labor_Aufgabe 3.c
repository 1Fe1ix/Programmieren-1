/*

BMI Rechner, Flieskommazahlen einlesen Berechnung durchf�hren Ausgeben

Ausgabe:

Gewicht in Gramm angeben:82000
Groesse in Zentimeter angeben:175
82000.000000, 175.000000Der BMI liegt bei: 26.775511!

*****************************************************************/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
    float Gewicht = 0.0;
    float Groe�e = 0.0;
    float BMI = 0.0;
    float GewichtinKg = 0.0;
    float Groe�e_in_m = 0.0;

    //Einlesen einer Flieskommazahl
    printf("Gewicht in Gramm angeben:");
    scanf(" %f", &Gewicht);
    printf("Groesse in Zentimeter angeben:");
    scanf(" %f", &Groe�e);

    GewichtinKg = Gewicht / 1000.0;
    Groe�e_in_m = Groe�e / 100.0;

    printf("%f, %f", Gewicht, Groe�e);

    BMI = GewichtinKg / (Groe�e_in_m * Groe�e_in_m);

    printf("Der BMI liegt bei: %f!", BMI);


    return 0;
}