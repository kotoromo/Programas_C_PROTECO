//Programa que calcule los factores de un numero entero ingresado por el usuario

int summation(int number);

//MAIN LOOP
int main()
{
	int n;
	scanf("%d", &n);
	int sum;
	sum = summation(n);
}

//FUNCTION PROGRAMMING HERE

int summation(int number)
{
	//printf("Executing the summation function\n"); //debug
	int c = 0;

	//printf("The value of the C variable is %d\n", c); //debug

	int divisor = number;

	int d;

	//printf("The value of the divisor variable is %d (MUST BE %d)\n", divisor, number); //debug

	for (; divisor > 0; divisor--)
	{
		//printf("Executing for loop inside summation function\n"); //debug

		//printf("The value of divisor variable is %d\n", divisor);//debug
		if (number % divisor == 0)
		{
			d = number / divisor;
			printf("%d/%d = %d\n",number, divisor, d );
		}
	}
}

/////////////////////////////////////////
//				NOTICIA				  //
///////////////////////////////////////
/*
	El codigo es mio (aunque este en ingles). Lo escribi para para una pregunta de SPOJ
	http://www.spoj.com/problems/DIVSUM/

/*