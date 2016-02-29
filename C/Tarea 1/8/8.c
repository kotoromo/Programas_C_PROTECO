//Cree un programa que calcule el promedio de las calificaciones ingresadas por un profesor
#include<stdio.h>

int main()
{
	int many = 0;
	int i;
	float calif[255], sum = 0.0, avg = 0.0;
	printf("Cuantas calificaciones va a ingresar?\n");
	scanf("%d", &many);

	for (i=0; i<many; i++)
	{
		printf("[%d/%d]Calificacion:\n", i, many);
		scanf("%f", &calif[i]);
	}

	for (i = 0; i < many; i++)
	{
		sum += calif[i]; 

	}
	avg = sum/many;
	printf("El promedio es: %lf\n", sum/many);
}