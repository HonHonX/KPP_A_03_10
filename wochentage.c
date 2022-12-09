#include<stdio.h>

int main () {

	/*
	*	Diese Programm soll nach der Eingabe einer Zahl
	*	als Kennzeichen (1-7) einen Wochentag ausgeben. 
	*/

	printf("\n ***************************");
	printf("\n *   ^,,,,^   *            * ");
	printf("\n *  ( o x o)  * Wochentage * ");
	printf("\n *  ( 7   7)  *            * ");
	printf("\n *   ´´´´´´   *    ©S.Buch * ");
	printf("\n *************************** \n\n");
	
	//Einlesen der Kennzahl
	int kennzahl;
	printf("\nBitte geben Sie eine Kennzahl von 1-7 an: ");
	scanf("%d",&kennzahl);

	//Ausgabe des passenden Wochentags
	if (kennzahl>=1 && kennzahl <=7) {
		switch(kennzahl) {
			case 1: printf("\nDer zur Kennzahl %d passende Wochentag ist der Montag.", kennzahl);
			break;	
			case 2: printf("\nDer zur Kennzahl %d passende Wochentag ist der Dienstag.", kennzahl);
			break;	
			case 3: printf("\nDer zur Kennzahl %d passende Wochentag ist der Mittwoch.", kennzahl);
			break;	
			case 4: printf("\nDer zur Kennzahl %d passende Wochentag ist der Donnerstag.", kennzahl);
			break;	
			case 5: printf("\nDer zur Kennzahl %d passende Wochentag ist der Freitag.", kennzahl);
			break;	
			case 6: printf("\nDer zur Kennzahl %d passende Wochentag ist der Samstag.", kennzahl);
			break;	
			default: printf("\nDer zur Kennzahl %d passende Wochentag ist der Sonntag.", kennzahl);
			break;	 
		}
	} else {
		printf("Ihre Eingabe war ungültig. Bitte wählen Sie eine Zahl zwischen 1 und 7.");
	}

	//Ende
	printf("\n\n");
	return 0;
}
