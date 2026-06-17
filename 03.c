//Após o conhecimento de um numerador e um denominador, construa um algoritmo para fornecer o resto desta divisão.

#include <stdio.h>
int main (){
    float numerador, denominador, divisao;

    printf("Digite o numerador:\n");
    scanf("%f", &numerador);

    printf("Digite o denominador:\n");
    scanf("%f", &denominador);

    divisao = numerador / denominador;

    printf("Resultado da divisão: %.2f\n", divisao);

    return 0;
}