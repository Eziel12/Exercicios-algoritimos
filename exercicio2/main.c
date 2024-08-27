#include <stdlib.h>
#include <stdio.h>

int main() {

    float precoPao, precoLeite, precoSuco;
    int quantidadePao, quantidadeLeite, quantidadeSuco;
    float totalPao, totalLeite, totalSuco, valorTotal;


    printf("Digite o preco do pao: R$ ");
    scanf("%f", &precoPao);
    printf("Digite o preco do leite: R$ ");
    scanf("%f", &precoLeite);
    printf("Digite o preco do suco de caixinha: R$ ");
    scanf("%f", &precoSuco);


    printf("Digite a quantidade de paes comprados: ");
    scanf("%d", &quantidadePao);
    printf("Digite a quantidade de leite comprado: ");
    scanf("%d", &quantidadeLeite);
    printf("Digite a quantidade de sucos de caixinha comprados: ");
    scanf("%d", &quantidadeSuco);


    totalPao = precoPao * quantidadePao;
    totalLeite = precoLeite * quantidadeLeite;
    totalSuco = precoSuco * quantidadeSuco;


    valorTotal = totalPao + totalLeite + totalSuco;


    printf("Total da compra: R$ %.2f\n", valorTotal);

    return 0;
}

