//Construa um algoritmo que seja capaz de definir qual o maior elemento entre três conhecidos.
 
#include <stdio.h>
int main(){
    int numero1, numero2, numero3;

    printf("Digite o primeiro número:\n");
    scanf("%d", &numero1);

    printf("Digite o segundo número:\n");
    scanf("%d", &numero2);

    printf("Digite o terceiro número:\n");
    scanf("%d", &numero3);

    if(numero1 > numero2 && numero1 > numero3){
        printf("O número %d é maior", numero1);
    }else{
        if(numero2 > numero1 && numero2 > numero3){
            printf("O número %d é maior\n", numero2);
        }else{
            printf("O número %d é maior\n", numero3);
        }
    }

    return 0;
}