//Realize un programa que sume o reste matrices de 2x2
#include<stdio.h>

//void suma(matriz1, matriz2);

void main()
{
	int m1[4]={1,1,1,1};
	int m2[4]={1,1,1,1};
	int m3[4]={0,0,0,0};
	int i=0;
	for (i;i<5;i++)
	{
		
		m3[i]=m1[i]+m2[i];
	}

	printf("Suma:\n");
	printf("|%d\t%d|\n|%d\t%d|", m3[0], m3[1], m3[2], m3[3]);

	for (i;i<5;i++)
	{
		
		m3[i]=m1[i]-m2[i];
	}
	printf("\nResta:\n");
	printf("|%d\t%d|\n|%d\t%d|\n", m3[0], m3[1], m3[2], m3[3]);
}
