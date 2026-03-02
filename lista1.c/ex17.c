#include <stdio.h>
//17) Imprima um triângulo crescente de asteriscos de tamanho N.

int main(){
    int n;
    printf("digite um valor ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        for(int j =0; j <=i; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}