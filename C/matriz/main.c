//6. Programa que sume y reste matrices de 2x2
#include<stdio.h>

int main()
{
	int m1[4]={1,1,1,1};
	int m2[4]={1,1,1,1};
	int m3[4]={0,0,0,0};
	int i=0;
	for (i;i<5;i++)
	{
		m3[i]=m1[i]+m2[i];
	}

	printf("|%d\t%d|\n|%d\t%d|", m3[0], m3[1], m3[2], m3[3]);

	return 0;
}


