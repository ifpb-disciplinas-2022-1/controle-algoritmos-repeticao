/*
Escreva em um programa em C que leia dois números e exiba a tabuada dos números entre eles.
2  e 5
2 x 1  3 x 1  4 x 1  5 x 1
*/
#include <stdio.h>
int main(){
    int a, b;
    scanf("%i%i", &a, &b);
    for(int n = a; n<=b;n++){
        for(int contador =1; contador <=10; contador++ ){
            printf("%i x %i = %i\n", n, contador, n*contador);
        }
    }
    return 0;
}