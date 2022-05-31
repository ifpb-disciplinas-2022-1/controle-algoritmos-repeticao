/*
Escreva um programa em linguagem C que simule um jogo de adivinhação. 
O algoritmo deve calcular um número aleatório (selecionado) e ler
 uma quantidade indefinida de números positivos (informado). 
 Ele será finalizado quando os números selecionado e informados forem iguais 
 ou quando ultrapassar cinco tentativas. 
 Por fim, devem ser exibidos: o número selecionado e a quantidade de tentativas.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TENTATIVAS 5
int main(){
    srand(time(NULL));
    // gerando números aleatórios entre 1 e 10
    int selecionado = rand() % 10 + 1; 
    int contador = 0;
    int informado;
    do{
        printf("Digite um número: ");
        scanf("%i", &informado);
        contador = contador + 1;
    }while(selecionado != informado && contador < TENTATIVAS);
    printf("Númeo selecionado: %i\n", selecionado);
    printf("Tentativas: %i\n", contador);
    return 0;
}