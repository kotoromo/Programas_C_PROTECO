//Realizar un programa que sume dos numeros utilizando validaciones para asegurarnos de que los numeros ingresados sean enteros
#include <stdio.h>  
#include <stdlib.h> 

int clean_stdin()
{
    while (getchar()!='\n'); //Si getchar no lee un caracter distinto a \n, no para hasta leer uno. *necesito ayuda para entender esta*
    return 1;
}

int main(void)  
{    
    int num1 = 0;
    int num2 = 0;  
    char c;
    do
    {  
        printf("\nIngresa un numero: ");

    } while (((scanf("%d%c", &num1, &c)!=2 || c!='\n') && clean_stdin())); //Mientras el scanf no lea 2 caracteres 
	//(entero + \n) o el caracter leido no sea '\n', va a repetir la linea dentro del do. Ademas, limpia el stdin
    //Solo si no lee 2 caracteres (entero + \n) o el segundo caracter no es \n.
 	do
    {  
        printf("\nIngresa un numero: ");

    } while (((scanf("%d%c", &num2, &c)!=2 || c!='\n') && clean_stdin()));

    printf("Suma: %d\n", num1+num2);

    return 0;  
}

//////////////////////////////////////////
// 				NOTA IMPORTANTE!		//
//////////////////////////////////////////
/*
	El presente codigo fue obtenido de StackOverflow a partir de la sig. liga
	[http://stackoverflow.com/questions/14099473/how-to-scanf-only-integer-and-repeat-reading-if-the-user-enter-non-numeric-chara]
	
	Como no pude obtener una solucion a partir de mi propio intelecto, minimo intente explicarlo, asegurandome de 
	entender de manera correcta y profunda que es lo que hace.
*/
