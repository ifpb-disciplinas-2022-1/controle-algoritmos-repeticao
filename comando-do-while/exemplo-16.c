#include <stdio.h>
# define CONTROLE 1
int main(){
    int op; 
    do {
        printf("bloco de código a ser repetido \n"); 
        printf("Repetir a execução? \n Para sim, digite 1; \n Para não, outra tecla\n");
        scanf("%i", &op);
    } while (op == CONTROLE);
   return 0;
}