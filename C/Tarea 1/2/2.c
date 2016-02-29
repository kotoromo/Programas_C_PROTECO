//Calculadora qe realize suma, resta, multi, division y factorial

#include<stdio.h>

int sum(int a, int b);
int sub(int a, int b);
int times(int a, int b);
int div(int a, int b);
int fact(int a);

int main()
{
	int input, n1, n2;

	printf("PORFAVOR SELECCIONA LA OPERACION A REALIZAR SEGUN SU NUMERO:\n");
	printf("[1] SUMA\n");
	printf("[2] RESTA\n");
	printf("[3] MULTIPLICACION\n");
	printf("[4] DIVISION\n");
	printf("[5] FACTORIAL\n");

	scanf("%d", &input);
	printf("INPUT(1):%d\n", input); //DEBUG

	if (input < 5)
	{
		printf("INPUT(pre):%d\n", input); //DEBUG
		printf("\nPORFAVOR INTRODUZCA DOS NUMEROS ENTEROS A OPERAR\n");
		printf("ENTERO 1:\n");
		scanf("%d", &n1);
		printf("ENTERO 2:\n");
		scanf("%d", &n2);
	}
	else
	{
		printf("\nPORFAVOR INTRODUZCA UN NUMERO ENTERO A OPERAR\n");
		scanf("%d", &n1);
	}
	

	switch (input)
	{
			case 1:
				sum(n1, n2);
			break;
	
			case 2:
				sub(n1, n2);
			break;
	
			case 3:
				times(n1, n2);
			break;
	
			case 4:
				div(n1, n2);
			break;
	
			case 5:
				fact(n1);
			break;
	}

	return 0;
}

int sum(a, b)
{
	printf("El resultado de sumar %d y %d es %d\n", a, b, a+b);
	return 0;
}

int sub(a, b)
{
	printf("El resultado de restar %d y %d es %d\n", a, b, a-b);
	return 0;
}

int times(a, b)
{
	printf("El resultado de multiplicar %d y %d es %d\n", a, b, a*b);
	return 0;
}

int div(a, b)
{
	printf("El resultado de dividir %d y %d es %d\n", a, b, a/b);
	return 0;
}

int fact(a)
{
	int i;
	int r=1;
	for (i=1; i <= a; i++)
	{
		r= r * i;
		//printf("%d\n", r);
	}

	printf("\nEl resultado de realizar %d! es %d\n", a, r);
	return 0;
}