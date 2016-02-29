#include<stdio.h>
int main()
{
	int a[10]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, var; //Por cada posicion reserva 4 bytes.
	int *p1=&a[0];
	int *p2=&a[5];
	/*printf("p1 apunta al: %d\n", *p1);
	printf("p2 apunta al: %d\n", *p2);
	p1 = p1 + 5;
	printf("p1 ahora apunta al: %d\n", *p1);*/
	var = *p1 + 1; //Al contenido de p1 osea a[0] se le suma 1 osea = 2
	printf("var: %d\n", var); //Imprime
	var=*(p1+1); //Te mueves una posicion en la direccion. Despues, al contenido de esa nueva posicion (a[1]) se lo asignas a var.
	printf("var 1: %d\n", var);
}