#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a, *b;
	int tam, i;

	printf("\nDame el tamano del arreglo: ");
	scanf("%d", &tam);

	a = (int *) malloc (tam * sizeof(int)); //Regresa un apuntador generico. Multiplicas el tamano dado por el tamano del tipo de dato entero
	b = (int *) calloc (tam, sizeof(int)); //Calloc inicializa 

	printf("\n\n");

	for (i = 0; i<tam; i++)
	{
		printf("\nValor a = %d y b = %d", a[i], b[i]);
	}

	free(a);
	free(b);
	printf("\n\n");
	for(i=0; i<tam; i++)
	{
		printf("\nValor a = %d y b = %d", a[i], b[i]);
	}

	printf("\n%p\n", a);
}