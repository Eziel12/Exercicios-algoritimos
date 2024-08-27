#include <stdio.h>
#include <stdlib.h>


int main() {
    float precoFabrica, percentualLucro, percentualImpostos;
    float valorLucro, valorImpostos, precoFinal;


    printf("Por favor, informe o preço de fabrica do veiculo em reais: R$ ");
    scanf("%f", &precoFabrica);


    printf("Agora, informe o percentual de lucro do distribuidor: ");
    scanf("%f", &percentualLucro);


    printf("Finalmente, informe o percentual de impostos aplicados: ");
    scanf("%f", &percentualImpostos);


    valorLucro = precoFabrica * percentualLucro / 100;

    valorImpostos = precoFabrica * percentualImpostos / 100;

    precoFinal = precoFabrica + valorLucro + valorImpostos;

    printf("O valor correspondente ao lucro do distribuidor: R$ %.2f\n", valorLucro);

    printf("O valor correspondente aos impostos: R$ %.2f\n", valorImpostos);

    printf("O preço final do veiculo, incluindo lucro e impostos, é: R$ %.2f\n", precoFinal);

    return 0;
}

