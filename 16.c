//Você faz uma aplicação de P reais a uma taxa de juros i constante por um período de n meses. 
//Qual será o montante M após o término da aplicação?
//Calcule também qual o lucro em reais e em percentual resultante da aplicação, sabendo-se que serão descontados 8% de IOF sobre o lucro bruto.

#include <stdio.h>
int main(){
    float aplicacao_P, taxajuros_I, periodomeses_N, montante_M, lucro_reais, lucro_percentual, lucro_bruto, desconto_IOF;

    printf("Digite o valor da aplicação feita: \n");
    scanf("%f", &aplicacao_P);

    printf("Digite o valor da taxa de juros: \n");
    scanf("%f", &taxajuros_I);

    printf("Digite o período de meses: \n");
    scanf("%f", &periodomeses_N);

    montante_M = aplicacao_P * (1 + (taxajuros_I* periodomeses_N));

    lucro_bruto = montante_M - aplicacao_P;

    desconto_IOF = lucro_bruto * 0.08;

    lucro_reais = lucro_bruto - desconto_IOF;

    lucro_percentual = (lucro_reais / aplicacao_P) * 100;

    printf("Montante final: R$%.2f\n", montante_M);
    printf("Lucro liquido: R$%.2f\n", lucro_reais);
    printf("Lucro percentual: R$%.2f%%\n", lucro_percentual);

    return 0;
}