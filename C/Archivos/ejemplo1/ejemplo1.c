#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){

    FILE *archivo, *archivo2; //Toma la misma direccion del archivo, de los retornos de las funciones
    char buf[20],buff;

    archivo=  fopen("test.txt","w");

    if(archivo==NULL){
        perror("\nError al abrir el archivo\n");
        exit(0); //Cierra y libera la memoria reservada
        //abort() //Cierra mal el programa, no libera la memoria
    }

    fputc(65,archivo);
    //fputc('x',archivo);

    printf("Ingresa un mensaje\n");
    fflush(stdin);
    gets(buf);

    fputs(buf,archivo);

    fclose(archivo);
    /*
    while(feof(archivo)==0){
        buff= fgetc(archivo);
        printf("%c",buff);
    }
    */

    archivo2=  fopen("test.txt","r");

    while(feof(archivo)==0){
        fgets(buf,20,archivo);
        printf("%s",buf);
    }

    fclose(archivo2);

    return 0;
}


//fputs = cadenas
//fputc = caracteres
//fprintf = con formato

//TAREA IMPLEMENTAR EL COMANDO COPY CON FREAD Y FWRITE