#include<stdio.h>
main()
{
	int a = 10;
	int *ptr;
	ptr=&a;
	printf("La variable a esta en %p\n", &a);
	printf("ptr almacena la direccion %p\n %p\n", ptr); // %p es para direcciones en memoria.
	printf("La variable tiene %d\n", *ptr);

}