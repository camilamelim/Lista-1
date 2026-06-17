//Faça um algoritmo que receba o salário de um funcionário.
//Calcule e imprima o novo salário sabendo-se que este sofreu um aumento de 25%, e também, o salário anterior e o reajuste, separadamente.

#include <stdio.h>
int main(){
    float salario, novo_salario, reajuste;

    printf("Digite o seu salário: \n");
    scanf("%f", &salario);

    reajuste = salario * 0.25;
    novo_salario = salario + reajuste;

    printf("Novo salário: R$%.2f\n", novo_salario);
    printf("Salário anterior: R$%.2f\n", salario);
    printf("Reajuste de: R$%.2f\n", reajuste);

    return 0;
}