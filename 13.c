//Faça um algoritmo que receba o peso de uma pessoa, um valor inteiro, calcule e exiba:
//O peso dessa pessoa em gramas;
//Se essa pessoa engordar 5%, qual será seu novo peso em gramas.

#include <stdio.h>
int main(){
    float peso, peso_gramas, novo_peso, novo_peso_gramas;

    printf("Digite seu peso: \n");
    scanf("%f", &peso);

    peso_gramas = peso * 1000;

    novo_peso = peso + (peso * 0.05);
    novo_peso_gramas = novo_peso * 1000;

    printf("Seu peso em gramas: %.2f\n", peso_gramas);
    printf("Seu novo peso, caso engorde 5%%: %.2f\n", novo_peso_gramas);

    return 0;
}