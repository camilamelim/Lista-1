//Elaborar um algoritmo, que faça a conversão de graus Fahrenheit para Celsius. 
//O algoritmo deve ler um valor em graus Fahrenheit e transformá-lo através da fórmula

#include <stdio.h>
int main(){
    int graus_celsius, graus_fahrenheit;

    printf("Digite a temperatura em Fahrenheit:\n");
    scanf("%d", &graus_fahrenheit);

    graus_celsius = (graus_fahrenheit - 32) * 5 / 9;

    printf("Temperatura convertida para Celsius: %d\n", graus_celsius);

    return 0;
}