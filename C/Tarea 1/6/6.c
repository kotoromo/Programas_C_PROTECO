//Hacer un programa donde el usuario ingrese 20 numeros y los ordene de mayor a menor

#include<stdio.h>
#define MANY 20

void main()
{
	int i;
	int num[MANY];
	int k;
	int temp;

	//LECTURA DE DATOS
	for (i = 0; i < MANY; i++)
	{
		printf("[%d/%d]Porfavor ingresa un numero entero: \n", i, MANY);
		scanf("%d", &num[i]);
		//printf("Numero %d guardado!", num[i]); //DEBUG
	}
	//ALGORITMO 'BURBUJA'
	// Si el termino actual es menor al siguiente, intercambiar pos.
	for (i = 0; i < MANY; i++)
	{
		for (k = 0; k < MANY; k++)
		{
			if (num[k] < num[k+1])//Si el numero actual(k) es menor al siguiente (k+1)...
			{
				temp = num[k]; //Almacena en una variable temporal el valor del actual
				num[k] = num[k+1]; //Asigna el mayor en la posicion actual
				num[k+1] = temp; //Asigna el valor menor en el la posicion siguiente
			}

		}
	}
	for (i = 0; i < MANY; i++)
	{
		printf("%d - ", num[i]); //Imprime los valores del arreglo ya ordenados
	}
}