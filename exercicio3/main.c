#include <stdio.h>
#include <stdlib.h>


int main() {
    float nota1, nota2, media;


    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);


    media = (nota1 + nota2) / 2;


    printf("Media das duas notas: %.2f\n", media);

    return 0;
}

