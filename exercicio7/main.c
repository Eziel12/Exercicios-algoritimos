#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float numero;
    float quadrado, cubo, raizQuadrada;


    printf("Digite um numero positivo maior que zero: ");
    scanf("%f", &numero);


    if (numero <= 0) {
        printf("O numero deve ser positivo e maior que zero.\n");
        return 1;  // Encerra o programa com código de erro
    }


    quadrado = numero * numero;
    cubo = numero * numero * numero;
    raizQuadrada = sqrt(numero);


    printf("Numero digitado ao quadrado: %.2f\n", quadrado);
    printf("Número digitado ao cubo: %.2f\n", cubo);
    printf("Raiz quadrada do numero digitado: %.2f\n", raizQuadrada);

    return 0;
}


