#include <stdio.h>
//18) Imprima uma pirâmide de asteriscos de altura N.
int main(){
    int n;

    printf("digite: ");
    scanf("%d", &n);

    for(int i = 1; i <=n; i++){
        for(int j=1; j <=n - i; j++){
            printf(" ");
        }
        for(int h = 0; h <=(2 *i ) -1; h++){
            printf("*");
        }
        printf("\n");
    

    }

    
}