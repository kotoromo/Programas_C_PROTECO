#include<stdlib.h>
#include<stdio.h>

int main()
{
	int **a;//Apuntador de apuntador
	int M,N,i,j;

	printf("Dame el numero de filas: ");
	scanf("%d", &M);

	a = (int **)malloc(M*sizeof(int*)); //Reservas el espacio para el apuntador doble a para el dato M ingresado por el usuario veces el tamano de int(4 bytes)

	printf("\nDame el numero de columnas: ");
	scanf("%d", &N);

	for (i=0; i<M; i++)
	{
		a[i] = (int *) malloc (N * sizeof(int)); //
	}

	for ( i = 0; i<M; i++)
	{
		for(j=0;j<N;j++)
		{
			printf("\nDame el valor de la posicion [%d][%d]: ", i, j);
			scanf("%d", &a[i][j]);
		}
	}

	for (i=0; i<M; i++)
	{
		for(j=0; j<N; j++)
		{
			printf("\t a[%d][%d]=%p", i, j, &a[i][j]);
		}

		printf("\n");
	}

	for (i=0;i<M;i++) //Se liberan las columnas
	{
		free(a[i]);
	}

	free (a); //Y despues las filas

	
}