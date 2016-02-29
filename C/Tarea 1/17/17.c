//Realizar un programa donde haya que simule un salon de clases. En el salon o grupo debe haber un profesor y 3 alumnos.
//Ingresar los datos del profesor y de los alumnos. Mostrarlos en pantalla y determinar cual de los 3 alumnos es el que tiene mayor
//promedio.

#include<stdio.h>

int main()
{
	char prof[255];
	char alum1[255];
	char alum2[255];
	char alum3[255];
	int temp, i, k;
	int calif[3]={8, 7, 4};

	scanf("Nombre del profesor? "); scanf("%s", &prof);
	scanf("Nombre del alumno 1? "); scanf("%s", &alum1);
	scanf("Nombre del alumno 2? "); scanf("%s", &alum2);
	scanf("Nombre del alumno 3? "); scanf("%s", &alum3);

	for (i = 0; i < 3; i++)
	{
		for (k = 0; k < 3; k++)
		{
			if (calif[k] < calif[k+1])//Si el numero actual(k) es menor al siguiente (k+1)...
			{
				temp = calif[k]; //Almacena en una variable temporal el valor del actual
				calif[k] = calif[k+1]; //Asigna el mayor en la posicion actual
				calif[k+1] = temp; //Asigna el valor menor en el la posicion siguiente
			}

		}
	}

	printf("Estos son los datos:\n");
	printf("El nombre del profesor es: %s\n", prof[255]);
	printf("Los nombres de los alumnos son: %s, %s, %s\n", alum1, alum2, alum3);
	printf("La calificacion de %s es de : %d\n", alum1, calif[1]);
	printf("La calificacion de %s es de : %d\n", alum2, calif[2]);
	printf("La calificacion de %s es de : %d\n", alum3, calif[3]);
	printf("Las calificaciones ordenadas de mayor a menor son:\n");
	for (i = 0; i < 3; i++)
	{
		printf("%d - ", calif[i]); //Imprime los valores del arreglo ya ordenados
	}
}

//Necesito manejar punteros para hacerlo bien.