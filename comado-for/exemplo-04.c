/*
Escreva um programa em linguagem C que exiba os números de 10 a 1.
*/

#include <stdio.h>
int main(){
    for(int contador = 10; contador >=1 ;contador--){
        printf("%i\n", contador);
    }
    // for(int contador =1; contador<=10; contador++){
    //         printf("%i\n", 11 - contador);
    // }
    return  0;
}