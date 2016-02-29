//Cree un programa que resuelva ecuaciones de segundo grado
#include<stdio.h>
#include<math.h>
main(){
    float a, b, c, xmas, xmenos, disc;
    printf("\t\t\tCALCULO DE LA X EN UNA ECUACION DE SEGUNDO GRADO");
    printf("\n\n\nSiendo la ecuacion de forma ax^2+bx+c=0...");
    printf("\n\nIntroduce el valor del coeficiente a\n");
    scanf("%f",&a);
    printf("\n\nIntroduce el valor del coeficiente b\n");
    scanf("%f",&b);
    printf("\n\nIntroduce el valor del coeficiente c\n");
    scanf("%f",&c);

    disc = b*b - 4*a*c;

    if (disc > 0)
    {
        xmas = (-b + (sqrt(disc)))/2*a;
        xmenos = (-b - (sqrt(disc)))/2*a;
        printf("\n\n\t\tLa discriminante es positiva. Existen soluciones reales");
    }
    else
    {
        disc = (-1)*disc;
        xmas = (-b - (sqrt(disc)))/2*a;
        xmenos = (-b + (sqrt(disc)))/2*a;
        printf("\n\n\t\tLa discriminante es negativa. No existen soluciones reales");
    }
    printf("\n\n\t\tX1 = %.2f",xmas);
    printf("\n\n\t\tX2 = %.2f",xmenos);
    return 0;
}
