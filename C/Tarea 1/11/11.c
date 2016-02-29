//En una tienda hay 3 vendedores. Calcular su pago mensual si el vendedor recibe 200 pesos por cada semana mas el 90% de sus ventas en cada
//semana

#include<stdio.h>

int main()
{
	float venta1 = 500.0, venta2 = 800.50, venta3 = 1507.66;
	float pago1 = 800 + 0.9*venta1;
	float pago2 = 800 + 0.9*venta2;
	float pago3 = 800 + 0.9*venta3;

	printf("El salario mensual del primer vendedor es de: %2.2f si sus ventas fueron en el mes fueron de %2.2f\n", pago1, venta1);
	printf("El salario mensual del primer vendedor es de: %2.2f si sus ventas fueron en el mes fueron de %2.2f\n", pago2, venta2);
	printf("El salario mensual del primer vendedor es de: %2.2f si sus ventas fueron en el mes fueron de %2.2f\n", pago3, venta3);

}

	