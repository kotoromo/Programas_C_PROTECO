//Elaborar un programa en donde el usuario ingrese un numero y el programa cuente el numero de numeros sietes ingresados 727 tiene 2
//numeros 7.

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
   char str[80];
   const char s[2] = "7";
   char *token;
   int count;
   
   /* get the first token */
   token = strtok(str, s);
   
   /* walk through other tokens */
   while( token != NULL ) 
   {
      printf( " %s\n", token );
    
      token = strtok(NULL, s);
      count = count++;
   }

   printf("Veces repetido: %d", 7);
   
   return(0);
}

//Lo intente
