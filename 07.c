//Faça um algoritmo que receba duas notas de um aluno e seus respectivos pesos, calcule e exiba a média ponderada dessas notas.

#include <stdio.h>
int main(){
    int nota1, nota2, peso1, peso2, media;

    printf("Digite a primeira nota:\n");
    scanf("%d", &nota1);

    printf("Digite o peso da primeira nota:\n");
    scanf("%d", &peso1);

    printf("Digite a segunda nota:\n");
    scanf("%d", &nota2);

    printf("Digite o peso da segunda nota:\n");
    scanf("%d", &peso2);

    media = (nota1 * peso1) + (nota2 * peso2) / peso1 + peso2;

    printf("Média final: %d\n", media);

    return 0;
}