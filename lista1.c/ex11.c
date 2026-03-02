#include <stdio.h>

int main(){
    //11) Leia 5 números e calcule a soma e a média.

    int n1, n2, n3, n4,n5;
    printf("digite: ");
    scanf("%d", &n1);
    printf("digite: ");
    scanf("%d", &n2);
    printf("digite: ");
    scanf("%d", &n3);
    printf("digite: ");
    scanf("%d", &n4);
    printf("digite: ");
    scanf("%d", &n5);


    int soma = n1 + n2 + n3 + n4 + n5;
    int media = soma/5;

    printf("A soma de tudo da %d e a media é %d", soma, media);
}