#include <stdio.h>
int main(){
    int numero;
    printf("Digite um número: ");
    scanf("%i", &numero);
    int contador = 1;
    while( numero >= 10){
        contador = contador + 1;
        numero = numero / 10;
    }
    printf("Algaristmos: %i\n", contador);
    return 0;
}