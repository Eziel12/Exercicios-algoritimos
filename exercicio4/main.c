#include <stdio.h>
#include <stdlib.h>


int main() {
    float salarioAtual, salarioNovo;
    float aumentoPercentual = 25.0;


    printf("Digite o salario que o funcionario ganha atualmente: R$ ");
    scanf("%f", &salarioAtual);


    salarioNovo = salarioAtual + (salarioAtual * aumentoPercentual / 100);


    printf("Novo salario do funcionario: R$ %.2f\n", salarioNovo);

    return 0;
}

