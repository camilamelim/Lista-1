//Faça um algoritmo que receba o valor de um depósito e o valor da taxa de juros. 
//Calcule e exiba o valor do depósito, o valor do rendimento e o valor total depois do rendimento.

#include <stdio.h>
int main (){
    float deposito, taxa_juros, valor_rendimento, valor_final;

    printf("Digite o valor do depósito:\n");
    scanf("%f", &deposito);

    printf("Digite o valor da taxa de juros:\n");
    scanf("%f", &taxa_juros);

    valor_rendimento = deposito * (taxa_juros / 100);
    valor_final = deposito + valor_rendimento;

    printf("Valor do depósito: %.2f\n", deposito);
    printf("Valor do rendimento: %.2f\n", valor_rendimento);
    printf("Valor total depois do rendimento: %.2f\n", valor_final);

    return 0;
}