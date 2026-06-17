//Dados dois números inteiros, construa um algoritmo que seja capaz de definir se estes são iguais.
//E caso isso não ocorrer, qual é o menor elemento.

#include <stdio.h>
int main (){
    int numero1, numero2;

    printf("Digite o primeiro número:\n");
    scanf("%d", &numero1);

    printf("Digite o segundo número:\n");
    scanf("%d", &numero2);

    if(numero1 == numero2){
        printf("São iguais!\n");
    }else{
        if(numero1 > numero2){
            printf("O número %d é menor\n", numero2);
        }else{
            printf("O número %d é menor\n", numero1);
        }
    }

    return 0;
}