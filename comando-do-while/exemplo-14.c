// O que esse algoritmo faz?
#include <stdio.h>
int main(){
  int numero;
  do {
     printf("Digite um número: ");
     scanf("%d", &numero);
  }while (numero <=200);
  return 0;
}