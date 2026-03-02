//15) Verifique se um número é primo.
#include <stdio.h>

int main(){
    int primoo;
    printf("digite: ");
    scanf("%d", &primoo);

    if(primoo % 2 != 0){
        printf("primo");
    }
}