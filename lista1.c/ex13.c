#include <stdio.h>

int main(){
    //13) Leia números até que o usuário digite 0. No final, mostre quantos números foram digitados e a
    //soma deles.

    int n, contador;
    int soma = 0;
    printf("digite: ");
    scanf("%d", &n);

    while(n != 0){
        printf("digite: ");
        scanf("%d", &n);
        soma += n;
        contador += 1;
    }

    printf("%d", contador);

    
}