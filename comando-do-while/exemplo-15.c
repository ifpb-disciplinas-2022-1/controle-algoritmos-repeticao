// O que esse algoritmo faz?
#include <stdio.h>
int main(){
    char letra = '\0';
    do {
        printf("Digite uma letra: ");
        scanf("%c", &letra);
        getchar();
    }while (letra != 'X');
    return 0; 
}