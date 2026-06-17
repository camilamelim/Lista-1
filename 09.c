//Faça um algoritmo que receba a idade de uma pessoa em anos, calcule e exiba essa idade em: meses, dias, horas e minutos.

#include <stdio.h>
int main(){
    int idade, meses, dias, horas, minutos;

    printf("Digite a sua idade: \n");
    scanf("%d", &idade);

    meses = idade * 12;
    dias = idade * 365;
    horas = idade * 24;
    minutos = idade * 60;

    printf("Idade em meses: %d\n", meses);
    printf("Idade em diass: %d\n", dias);
    printf("Idade em horas: %d\n", horas);
    printf("Idade em minutos: %d\n", minutos);

    return 0;
}
