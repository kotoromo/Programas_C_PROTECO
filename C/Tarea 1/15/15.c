//Programa que calcule el area y el perimetro de un circulo
#include<stdio.h>

main()
{
    float pi, radio, area, perimetro;
    /*Calculo del area de un circulo*/
    printf("\n\n\tIntroduce el valor del radio del circulo ...");
    scanf("%f",&radio);
    pi = 3.1416;
    area = radio * radio * pi;
    perimetro = pi*2*radio;
    printf("\n\n\tEl area del circulo de radio %.3f es %5.2f y su perimetro es: %5.2f\n", radio, area, perimetro);

    return 0;
}
