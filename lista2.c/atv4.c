#include <stdio.h>

int negativos(int vet[], int tamanho){
    int negativo = 0;
    for(int i =0; i <tamanho; i++){
        printf("digite o valores: ");
        scanf("%d", &vet[i]);
        if(vet[i] < 0){
            negativo += 1;
        }
    }
    return negativo;
}

int main(){
    int vet[5];
    printf("%d", negativos(vet, 5));


    return 0;
}