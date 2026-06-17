//Faça um algoritmo que receba o salário de um funcionário.
//Calcule e exiba o valor do imposto de renda a ser pago, sabendo que o imposto equivale a 5% do salário.
//E também, o valor líquido do salário a receber.

#include <stdio.h>
int main (){
    float salario, imposto_renda, valor_liquido;

    printf("Digite o seu salário: \n");
    scanf("%f", &salario);

    imposto_renda = salario / 0.05;
    valor_liquido = salario - imposto_renda;

    printf("Valor do imposto de renda: %2.f\n", imposto_renda);
    printf("Valor líquido do salário a receber: %2.f\n", valor_liquido);

    return 0;
}