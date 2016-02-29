#include<stdio.h>
int main()
{
	int lista[] = {24, 30, 15, 45, 34};
	int i;
	int *plista = lista; //El nombre del arreglo ya apunta a la primera localidad de la memoria.
	for (i = 0; i < 5; i++)
	{
		printf("%d\n", *(plista+i));
	}
}