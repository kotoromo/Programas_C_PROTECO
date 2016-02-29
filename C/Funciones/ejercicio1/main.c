#include<stdio.h>

int suma(int a, int lim)
{
	if(a==lim)
	{
		return a;
	}

	return a++ + suma(a, lim);
}

int main()
{
	int opc = 0;
	printf("Hasta que valor?\n");
	scanf("%d", &opc);
	printf("La suma es %d\n", suma(1, opc));
}