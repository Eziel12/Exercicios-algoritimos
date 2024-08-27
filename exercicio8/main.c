#include <stdio.h>
#include <stdlib.h>

int main() {
    int anoNascimento, anoAtual;

    printf("Digite o ano de nascimento: ");
    scanf("%d", &anoNascimento);
    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);

    printf("A idade atual da pessoa: %d anos\n", anoAtual - anoNascimento);
    printf("A idade da pessoa em 2015: %d anos\n", 2015 - anoNascimento);

    return 0;
}

