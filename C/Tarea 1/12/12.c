//Crear un sistema de logueo en donde el usuario ingrese su UserID y el programa le genere una contrasena aleatoria de 10 caracteres

#include<stdio.h>
#include<stdlib.h>

void login(int arr[10]);
int create(int arr[10]);
int main()
{
	int input, userid;
	int store[10];
	printf("Deseeas crear un usuario[1] o iniciar sesion[2]?\n");
	scanf("%d", &input);

	switch (input)
	{
		case 1:
			create(store[10]);
		break;

		case 2:
			login(store[10]);
		break;
	}
}
int create(int arr[10])
{
	int i=1, k=1;
	printf("Tu userid es: %d", i);
	int psswd = rand()%10;
	arr[i] = psswd;
	printf("Tu contrasena es: %d\n", psswd);
	i = i++;
	k = i++;

	return 0;
}

void login(int arr[10])
{
	int userid, passwd;
	printf("Introduce tu userid: \n");
	scanf("%d", &userid);
	printf("\nIntroduce tu password: \n");
	scanf("%d", &passwd);
	if (arr[userid]==passwd)
	{
		printf("Logeado con exito!\n");
	}
	else
	{
		printf("Contrasena incorrecta.\n");
	}
}

//Lo intente