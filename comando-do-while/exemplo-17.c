/*
Escreva um programa em linguagem C que leia um número indeterminado 
de números positivos. O algoritmo deve calcular, imprimir a soma e a média, 
e continuar até ser digitado o zero.
*/
#include <stdio.h>
#define ZERO 0
int main(){
    int numero;
    int soma = 0;
    int quantidade = 0;
    float media;
    do{
        printf("digite um número: ");
        scanf("%i", &numero);
        soma = soma + numero;
        quantidade = quantidade + 1;
        // printf("digite um número: ");
        // scanf("%i", &numero);
    }while(numero != ZERO);
    media = (float) soma / quantidade;
    printf("Soma: %i\n", soma);
    printf("Quantidade: %i\n", quantidade);
    printf("Média: %.2f\n", media);
    return 0;
}