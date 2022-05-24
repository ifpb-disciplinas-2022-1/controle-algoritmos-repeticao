#include <stdio.h>
int main(){
  int numero = 19;
    while (numero <= 0 || numero % 2 != 0){
        printf("\n Valor não permitido");
        printf("\n Digite um valor: ");
        scanf("%d", &numero);
    }
    printf("Número: %i\n", numero); //par e positivo
    return 0; 
}