//Dados dois números inteiros e distintos, construa um algoritmo que seja capaz de definir qual é o maior elemento.

#include <stdio.h>
int main (){
    int numero1, numero2;

    printf("Digite o primeiro número:\n");
    scanf("%d", &numero1);

    printf("Digite o segundo número:\n");
    scanf("%d", &numero2);

    if(numero1 > numero2){
        printf("O número %d é maior\n", numero1);
    }else{
        printf("O número %d é maior\n", numero2);
    }

    return 0;
}