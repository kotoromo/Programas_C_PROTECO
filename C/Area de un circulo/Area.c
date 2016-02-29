#include<stdio.h>
#include<conio.h>

main(){
    float pi, radio, area;
    /*Calculo del area de un circulo*/
    printf("\n\t\t\tINTRODUCCION DE DATOS PARA CALCULAR EL AREA scanf()\n\n");
    printf("\n\n\tIntroduce el valor del radio del circulo ...");
    scanf("%f",&radio);
    pi = 3.1416;
    area = radio * radio * pi;
    printf("\n\n\tEl area del circulo de radio %.3f es %5.2f", radio, area);

    return 0;
}
