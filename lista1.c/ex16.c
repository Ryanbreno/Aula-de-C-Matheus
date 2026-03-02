#include <stdio.h>
//16) Imprima um quadrado de asteriscos de tamanho N.

int main(){
    int n;
    printf("digite um valor ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        for(int j =0; j < n; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}