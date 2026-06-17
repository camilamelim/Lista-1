//Um trabalhador recebe R$ 20,00 por hora normal trabalhada e um acréscimo de 50% sobre este valor, para cada hora extra trabalhada. 
//Calcule qual o valor de seu salário após uma semana de trabalho, com jornada de 44 horas semanais. 
//O algoritmo deverá, inicialmente, requisitar ao usuário qual foi a quantidade de horas que o trabalhador realmente trabalhou na semana.

#include <stdio.h>
int main(){
    int horas_trabalhadas, horas_extras;
    float salario, valor_hora = 20, valor_extra = 30;

    printf("Digite quantas horas trabalhou em uma semana: \n");
    scanf("%d", &horas_trabalhadas);

    if(horas_trabalhadas <= 44){
        salario = horas_trabalhadas * valor_hora;
    }else{
        horas_extras = horas_trabalhadas - 44;
        salario = (44 * valor_hora) + (horas_extras * valor_extra);
    }

    printf("Salário total: R$%.2f\n", salario);

    return 0;
}