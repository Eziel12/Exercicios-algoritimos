#include <stdio.h>

int main() {
    int diasTrabalhados;
    float valorDiario = 15.00;
    float salarioTotal;

    printf("Digite o numero de dias trabalhados: ");
    scanf("%d", &diasTrabalhados);
    salarioTotal = diasTrabalhados * valorDiario;
    printf("O total liquido que o eletricista devera receber: R$%.2f\n", salarioTotal);

    return 0;
}

