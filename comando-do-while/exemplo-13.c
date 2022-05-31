#include <stdio.h>
int main(){
    int numero;
    int contador = 1; 
    do{
        printf("Digite um número: ");
        scanf("%d", &numero);
        printf("Contador: %d \n", contador++);
    //controle lógico -> número diferente de zero
    } while (numero !=0);
    // printf("Contador: %d \n", contador);
    return 0; 
}