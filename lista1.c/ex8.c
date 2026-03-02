#include <stdio.h>

int main(){
    //8) Leia um número N e imprima apenas os números pares de 1 até N.

    int n;
    printf("digite: ");
    scanf("%d", &n);

    for(int i =1; i <=n; i++){
        if(i % 2 == 0){
            printf("%d", i);
        }
    }
    
    return 0;
}