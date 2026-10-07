#include <stdio.h>
#include <stdlib.h>

int main () {
    float a,b,suma;
    printf("Programa de suma en C");

    printf("Ingresa el primer numero: ");
    scanf("%f",&a);

    printf("Ingresa el segundo numero: ");
    scanf("%f",&b);

    suma=a+b;

    printf("La suma es: %.2f\n", suma);

    return 0;
}
