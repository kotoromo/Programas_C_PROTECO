#include<stdio.h>
#include<stdlib.h>
//Definicion de una estructura
/*struct Name_struct
{
	//miembros
}Variables.....VariablesN;
*/
/*
struct Compu
{
	char marca[20];
	char color[20];
};
struct Persona
{
	//Miembros, elementos o atributos
	char Nombre[50];
	char Mascota[20];
	int Edad;
	float Estatura;
	struct Compu cpu;
}Nicky;//De esta estructura hazme una estructura Nicky.
*/
typedef struct
{
	/*miembros
		.
		.
		.
		.
	*/
}tipo_dato;

typedef struct
{
	char nombre[20];
	char modelo[20];
}cpu;

struct tipo_dato
{
	int edad;
	float estatura;
}Var1;

typedef struct
{
	char nombre[20];
	char modelo[10];
}Persona2;

/*void imprimir()
{
	printf("Hola mundo\n");
}
*/

int main()
{
	/*int i;
	struct Persona Miguel;
	struct Persona Agenda[10];
	struct Persona *Mod;
	Mod = &Nicky;*/

	Persona2 Miguel;
	Persona2 *apt;
	apt=(Persona2 *)malloc(10*sizeof(Persona2));
	apt = realloc(apt, 5);
	/*for (i = 0; i<10; i++)
	{
		fflush(stdin);
		printf("Introduce el Nombre:\n");
		fflush(stdin);
		scanf("%s",&Agenda[i].Nombre);
		printf("Introduce la Mascota:\n");
		fflush(stdin);
		scanf("%s",&Agenda[i].Mascota);
		printf("Introduce la Edad:\n");
		fflush(stdin);
		scanf("%d", &Agenda[i].Edad);
		printf("Introduce la Estatura:\n");
		fflush(stdin);
		scanf("%f", &Agenda[i].Estatura);
		fflush(stdin);
	}*/

	/*for (i = 0; i<10; i++)
	{
		fflush(stdin);
		printf("Introduce el Nombre:\n");
		fflush(stdin);
		scanf("%s",&Mod[i].Nombre);
		printf("Introduce la Mascota:\n");
		fflush(stdin);
		scanf("%s",&Mod[i].Mascota);
		printf("Introduce la Edad:\n");
		fflush(stdin);
		scanf("%d", &Mod[i].Edad);
		printf("Introduce la Estatura:\n");
		fflush(stdin);
		scanf("%f", &Mod[i].Estatura);
		fflush(stdin);
	}	*/

	//OPERADOR FLECHA (->)
	/*
		* y & son inversos
		Arreglo[i] '=>' *(Arreglo+i)
		Modificador-> Edad '=>' *(Modificador).Edad (En la variable que contienes apuntador, accede a edad.)
	*/

	/*printf("Introduce Nombre:\n");
	fflush(stdin);//Se limpia buffer para limpiar basura
	gets(Mod -> Nombre);//Lee una cadena. Adentro recibe un apuntador.
	printf("Introduce la Mascota:\n");
	fflush(stdin);
	gets(Mod -> Mascota);//Se acceden a los miembros de la estructura con el operador punto.
	printf("Introduce la Edad:\n");
	fflush(stdin);
	scanf("%d", &Mod -> Edad);
	printf("Introduce la Estatura:\n");
	fflush(stdin);
	scanf("%f", &Mod -> Estatura);
	fflush(stdin);
	printf("Introduce la Marca:\n");
	fflush(stdin);
	scanf("%s", &Mod -> cpu.marca);
	printf("Introduce el color:\n");
	fflush(stdin);
	scanf("%s", &Mod -> cpu.color);
	printf("El nomrbe es: %s\n Mascota: %s\n Edad: %d\n Estatura: %f \n Marca: %s, \n Color: %s \n",
		Mod -> Nombre, Mod -> Mascota, Mod -> Edad, Mod -> Estatura, Mod -> cpu.marca, Mod -> cpu.color);*/
	return 0;
}
