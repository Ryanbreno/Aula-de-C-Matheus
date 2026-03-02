#include <stdio.h>


int main(){
    int n;
    int fat = 1;

    printf("digite: ");
    scanf("%d", &n);

    for(int i = n; i >= 1; i--){
        fat = fat * i;
    }
    printf("de %d ate fatorial %d ", n , fat);
    return 0;
}