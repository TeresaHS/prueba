/*
* Área del rectángulo
*/

#include <stdio.h>

	//Variables globales

float b;	//base del rectangulo
float a;	//altura del rectangulo
float s;	//Superficie del rectangulo

main()
{

	printf("AREA DEL RECTANGULO");
	printf("\nBase:");
	scanf("%f",&b);
	printf("\nAltura:");
	scanf("%f",&a);

	s=b*a;
	
	printf("\nSuperficie=%f",s);

}