#include <stdio.h>
int main(){
    int anterior = 1;
    int posterior = 1;
    int auxiliar = 0;
    int n;
    printf("Digite o valor de N: ");
    scanf("%i", &n);
    for(int i=0; i<=n; i++){
        printf("%i\n", posterior);
        auxiliar = posterior + anterior;
        posterior = anterior;
        anterior = auxiliar;
    }
    return 0;
}
