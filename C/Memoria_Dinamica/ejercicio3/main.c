#include<stdio.h>
#include<stdlib.h>

void memoria(int *a, int *tam);

int main()
{
	int *a;
	int tam, i, opc;

	printf("Dame el tamano inicial del arreglo: ");
	scanf("%d", &tam);

	a = (int *) calloc(tam, sizeof(int));

	for (i=0; i<tam; i++)
	{
		printf("\nDame el valor de la posicion %d: ", i);
		scanf("%d", &a[i]);
	}

	for (i=0; i<tam;i++)
	{
		printf("\nEl arreglo quedo: a[%d] = %d", i, a[i]);
	}

	do
	{
		printf("\nEl arreglo se lleno, deseas agregar otro valor?\n");
		printf("1)=SI\t2)=NO: ");
		scanf("%d", &opc);
		if(opc==1)
		{
			memoria(a, &tam);
		}

		for(i=0; i<tam; i++)
		{
			printf("\nEl arreglo quedo: a[%d]=%d", i, a[i]);
		}
	}while(opc == 1);

	free(a);
}

void memoria(int *a, int *tam)
{
	a = (int *)realloc(a, (*tam+1)*sizeof(int));
	printf("\nDame el nuevo valor: ");
	scanf("%d", &a[*tam]);
	*tam = *tam + 1;
	printf("\nEl tamano del arrelo es de: %d", *tam);
}