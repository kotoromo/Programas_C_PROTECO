//Crear un programa que simule las votaciones electorales. Debera mostrar el total de votos, los votos que recibieron cada partido y los
//porcentajes de los votos. Mostrar un menu con los partidos PRI, PRD, PAN y preguntar por quien desea votar.

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int who = 0;
	int pri = (rand() % 500000) + 15000;
	int prd = (rand() % 500000) + 15000;
	int pan = (rand() % 500000) + 15000;

	printf("[1]Partido Revolucionario Institucional\n");
	printf("[2]Partido de la Revolucion Democratica\n");
	printf("[3]Partido Accion Nacional\n");

	printf("\nPor quien desea votar? Por favor introduzca el numero representando su voto.\n");
	scanf("%d", &who);

	printf("\n\n\t\tEstos son los resultados actuales de la votacion:\n");

	switch (who)
	{
		case 1:
			pri = pri + 1;

		break;

		case 2:
			prd = prd + 2;

		break;

		case 3:
			pan = pan +1;
		break;
	}

	printf("[*]PRI: %d votos! siendo el %lf porciento!\n", pri, (((double)pri)/(pri+prd+pan))*100);
	printf("[*]PRD: %d votos! siendo el %lf prociento!\n", prd, (((double)prd)/(pri+prd+pan))*100);
	printf("[*]PAN: %d votos! siendo el %lf porciento!\n", pan, (((double)pan)/(pri+prd+pan))*100);
}

