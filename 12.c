//Sabe-se que o quilowatt de energia custa um quinto do salário mínimo. 
//Faça um algoritmo que receba o valor do salário mínimo e a quantidade de quilowatts gasta por uma residência. Calcule e exiba:
//O valor, em reais, de cada quilowatt;
//O valor, em reais, a ser pago por essa residência;
//O novo valor a ser pago por essa residência, a partir de um desconto de 15%.

#include <stdio.h>
int main(){
    float salario_minimo, quilowatts, valor_quilowatts, novo_valor, valor_pago, valor_desconto;

    printf("Digite o valor do salário mínimo: \n");
    scanf("%f", &salario_minimo);

    printf("Qual a quantidade de quilowatts gasta na residência: \n");
    scanf("%f", &quilowatts);

    valor_quilowatts = salario_minimo / 5;
    
    valor_pago = valor_quilowatts * quilowatts;

    valor_desconto = valor_pago * 0.15;
    novo_valor = valor_pago - valor_desconto;

    printf("Valor em reais de cada quilowatts: R$%.2f\n", valor_quilowatts);
    printf("Valor em reais a ser pago: R$%.2f\n", valor_pago);
    printf("Novo valor a ser pago, a partir de um desconto de 15%%: R$%.2f\n", novo_valor);

    return 0;
}