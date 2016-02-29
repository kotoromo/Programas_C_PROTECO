#include<stdio.h>
int longcad(char *);
int main()
{
	char *cadena ="abcd";
	printf("%d", longcad(cadena));
}
int longcad(char *cad)
{
	char *p = cad; //asigna cadenas
	while(*p != '\0') //Mientras mi cadena no termine
		p++; // Voy incrementando
	return(p-cad); //Resta el contenido del apuntador (0) y luego le suma la longitud recorrida del apuntador.
	
}