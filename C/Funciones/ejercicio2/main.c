#include<stdio.h>

struct Name_struct

void imprimir()
{
	printf("Hola mundo\n");	
}

int main()
{
	// apt apunta a variable de tipo void
	void *apt;
	// aptB apunta a una funcion tipo void
	void *apt;
	//Estructura: conjunto de tipos de datos referenciados bajo un mismo nombre
	void (*AptB)();
	AptB=imprimir;
	AptB();
	printf("La funcion imprimir vive en: %p", imprimir);
	return 0;
}