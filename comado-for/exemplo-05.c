/*
Escreva um programa em linguagem C que exiba o quadrado dos
 números ímpares contidos no intervalo de 1 a 10.
*/

#include <stdio.h>
int main(){
    for(int contador=1; contador<=10; contador++){
        if(contador % 2 != 0){ //ímpares
            int quadrado = contador * contador;
            printf("%i\n", quadrado);
        }
    }
    return 0;
}