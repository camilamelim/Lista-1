//Um comerciante deseja saber qual é o lucro percentual que ele está tendo com a venda de mercadorias. 
//Calcule o lucro percentual de uma mercadoria ao serem fornecidos o preço de compra e o preço de venda da mesma.

#include <stdio.h>
int main(){
    float lucro_percentual, preco_compra, preco_venda, lucro_reais;

    printf("Digite o preço da compra do produto: \n");
    scanf("%f", &preco_compra);

    printf("Digite o valor da venda do produto: \n");
    scanf("%f", &preco_venda);

    lucro_reais = preco_venda - preco_compra;
    lucro_percentual = (lucro_reais / preco_compra) * 100;

    printf("Lucro percentual: %.2f\n", lucro_percentual);

    return 0;
}