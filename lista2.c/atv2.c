#include <stdio.h>
#define MAX


int recebe_valor(int vet[], int tamanho){
    int maior = vet[0];
    for(int i = 0; i <tamanho; i++){
        printf("digite o valor: ");
        scanf("%d", &vet[i]);
        if(vet[i] > maior){
            maior = vet[i];
        }
    }
    return maior;
}


int main(){
    int vet[5];
    int guarda_maior = recebe_valor(vet, 5);
    printf("o valor maior é: %d", guarda_maior);
    
}