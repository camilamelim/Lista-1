//Faça um algoritmo que receba o ano de nascimento de uma pessoa e o ano atual. Calcule e exiba:
//A idade dessa pessoa;
//Essa idade convertida em semanas.

#include <stdio.h>
int main(){
    int ano_nascimento, ano_atual, idade, idade_semanas;

    printf("Digite o ano em que nasceu: \n");
    scanf("%d", &ano_nascimento);

    printf("Digite o ano atual: \n");
    scanf("%d", &ano_atual);

    idade = ano_atual - ano_nascimento;
    idade_semanas = idade * 52;

    printf("Sua idade: %d\n", idade);
    printf("Sua idade em semanas: %d\n", idade_semanas);

    return 0;
}