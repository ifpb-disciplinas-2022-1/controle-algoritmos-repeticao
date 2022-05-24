/*
Escreva um programa em linguagem C que leia uma quantidade
indeterminada de números inteiros, calcule e exiba quantos
números positivos e negativos foram digitados. 
O algoritmo deve continuar até ser digitado o zero. 
*/
#include <stdio.h>
int main(){
    int numero;
    int positivos = 0;
    int negativos = 0;
    printf("Digite um número: ");
    scanf("%i", &numero);
    while(numero!=0){
        if(numero >0 ){ //positivo 
            positivos = positivos +1; //positivos +=1 // positivos++
        }
        if(numero < 0 ){ //negativo 
            negativos = negativos +1; 
        }
        printf("Digite um número: ");
        scanf("%i", &numero);
    }
    printf("Positivos: %i\n", positivos);
    printf("Negativos: %i\n", negativos);
    return 0;
}