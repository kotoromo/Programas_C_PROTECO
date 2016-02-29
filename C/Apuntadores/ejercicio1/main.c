#include<stdio.h>
int main()
{
	int *p1;
	char *p2;
	int a = 1;
	char b = 'c';
	p1 = &a;
	p2 = &b;

	printf("p1 = %p\n", p1);
	printf("p1 + 1 = %p\n", p1+1);//El entero suma 4 bytes a la localidad de memoria
	printf("p2 = %p\n", p2);
	printf("p2 + 1 = %p\n", p2+1);//Mientras que el caracter solo 1 byte.
}