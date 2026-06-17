//Faça um algoritmo que receba três notas de um aluno.
//Calcule a média aritmética entre as três notas e exiba mensagem de ’Aprovado’ ou ’Reprovado’.
//Considerando a média de aprovação maior ou igual a 7,0.

#include <stdio.h>
int main(){
    float nota1, nota2, nota3, media;

    printf("Digite a primeira nota:\n");
    scanf("%f", &nota1);

    printf("Digite a segunda nota:\n");
    scanf("%f", &nota2);

    printf("Digite a terceira nota:\n");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    if(media >= 7){
        printf("Aprovado!\n");
    }else{
        printf("Reprovado!\n");
    }

    return 0;
}
