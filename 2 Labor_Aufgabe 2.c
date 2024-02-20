/*
Fahrenheit/Grad converter

Ausgabe:

Bitte Grad Zahl in Farenheit eingeben:6
6.0 Grad Fahrenheit = -14.4 Grad Celsius

**************************************************************++++*/


#include <stdio.h>



int main()
{
	float Grad_Celsius = 0;
	float Grad_Fahrenheit = 0;



	printf("Bitte Grad Zahl in Farenheit eingeben:");
	scanf("%f", &Grad_Fahrenheit);


	Grad_Celsius = (5 * (Grad_Fahrenheit - 32)) / 9;

	printf("%.1f Grad Fahrenheit = %.1f Grad Celsius ", Grad_Fahrenheit, Grad_Celsius);


	return 0;
}
