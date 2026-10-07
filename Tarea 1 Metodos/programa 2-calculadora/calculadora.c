#include <stdio.h>

int main() {
    int opcion;
    float num1, num2, resultado;

    printf("CALCULADORA EN C \n");
    printf("1. Suma\n");
    printf("2. Resta\n");
    printf("3. Multiplicacion\n");
    printf("4. Division\n");
    printf("Elige una opcion (1-4): ");
    scanf("%d", &opcion);

    printf("Ingresa el primer numero: ");
    scanf("%f", &num1);
    printf("Ingresa el segundo numero: ");
    scanf("%f", &num2);

    switch(opcion) {
        case 1:
            resultado = num1 + num2;
            printf("Resultado de la suma: %.2f\n", resultado);
            break;
        case 2:
            resultado = num1 - num2;
            printf("Resultado de la resta: %.2f\n", resultado);
            break;
        case 3:
            resultado = num1 * num2;
            printf("Resultado de la multiplicacion: %.2f\n", resultado);
            break;
        case 4:
            if(num2 != 0) {
                resultado = num1 / num2;
                printf("Resultado de la division: %.2f\n", resultado);
            } else {
                printf("Error: No se puede dividir entre cero.\n");
            }
            break;
        default:
            printf("Opcion invalida.\n");
    }

    return 0;
}