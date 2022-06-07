#include <stdio.h>
int main(){
    int a, l;
    printf("Digite a altura e largura: ");
    scanf("%i %i", &a, &l);
    for(int largura=1; largura<=l; largura++){
        for(int altura=1; altura<=a; altura++){
            if(largura ==1 || largura ==l || altura ==1 || altura==a)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}