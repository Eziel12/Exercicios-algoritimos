#include <stdio.h>
#include <stdlib.h>


int main() {
    float salarioAtual, percentualAumento, valorAumento, novoSalario;


    printf("Digite o salario atual do funcionario: R$ ");
    scanf("%f", &salarioAtual);


    printf("Digite o percentual de aumento: ");
    scanf("%f", &percentualAumento);


    valorAumento = salarioAtual * percentualAumento / 100;


    novoSalario = salarioAtual + valorAumento;


    printf("Valor do aumento: R$ %.4f\n", valorAumento);
    printf("Novo salario: R$ %.4f\n", novoSalario);

    return 0;
}

