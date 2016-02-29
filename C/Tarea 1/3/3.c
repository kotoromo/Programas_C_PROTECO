//Crear dos funciones utilizando apuntadores para llenar e imprimir los datos de una estructura. Las funciones deben de recibir el apuntador
//hacia la estructura

#include<stdio.h>

int llenado(char *p);
int imprimir(char *p);
int main()
{
	char *p;
	char arr[256];
	p = &arr[256];

	llenado(*p);
	imprimir(*p);

}
int llenado(char *p)
{
	fgets(*p, sizeof(*p), stdin);
}
int imprimir(char *p)
{
	printf("%s", *p);
}

//No pude hacerlo. Necesito investigar mas a fondo apuntadores.