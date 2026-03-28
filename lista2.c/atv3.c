#include <stdio.h>

float media(int vet[], int tamanho){
    float soma = 0;
    for(int i = 0; i < tamanho; i++){
        soma += vet[i];
    }
    return soma / tamanho;

}

int main(){
    int vet[3];
    for(int i = 0; i <3; i++){
        printf("digite o valor: ");
        scanf("%d", &vet[i]);
        
    }
    printf("%.2f", media(vet, 3));









    return 0;
}