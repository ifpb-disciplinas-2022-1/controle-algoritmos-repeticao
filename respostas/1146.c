#include <stdio.h>
int main(){
    int n;
    scanf("%i", &n);
    while(n!=0){
        for(int i=1; i<n;i++){
            printf("%i ", i);
        }
        printf("%i\n", n);
        scanf("%i", &n);
    }
    return 0;
}