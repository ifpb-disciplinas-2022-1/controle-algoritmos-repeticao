/*
Escreva um programa em linguagem C que leia um número e exiba a sua tabuada.

2 X 1 = 2
2 X 2 = 4
...
2 X 10 = 20
*/
#include <stdio.h>
int main(){

    int numero;
    printf("Digite o número: ");
    scanf("%i", &numero);
    for(int contador=1; contador<=10; contador++){
        printf("%i x %i = %i \n",numero, contador, numero*contador);    
    }

    return 0;
}