#include<stdio.h>
int main()
{
	char a=10;
	char b=9;
	char *ptr;
	ptr=&a;
	printf("La variable a esta en: %p\n", &a);
	printf("La variable b esta en: %p\n", &b);
	printf("La variable ptr esta en: %p\n", &ptr);//ptr esta en otra localidad de memoria.
	printf("La variable ptr almacena: %p\n", ptr);
}

//char almacena 1, int y float 4, los double pues los dobles.