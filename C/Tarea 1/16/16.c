//Elaborar un programa que determine si un triangulo es un triangulo es o no rectangulo e indicar que lado es la hipotenusa. El usuario debe
//ingresar los catetos y la hipotenusa.

#include<stdio.h>
#include<math.h>
void main()
{
	float a;
	float b;
	float c;

	printf("Por favor introduce los lados de tu triangulo\n");
	printf("Lado 1:");
	scanf("%f", &a);
	printf("\nLado 2:");
	scanf("%f", &b);
	printf("\nLado 3:");
	scanf("%f", &c);

	if ((a+b>c) && (a+c>b) && (b+c>a))
	{
		if (((a*a) + (b*b)) == (c*c))
		{
			printf("\nTu triangulo es rectangulo.\n");
		}
	}
	else
	{
		printf("\nEsto no es un triangulo\n");
	}

}
