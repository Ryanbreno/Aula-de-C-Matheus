#include <stdio.h>


int main(){
    int vet[10];
    int valor = 0;

    for(int i = 0; i <10; i++){
        printf("digite o valor: ");
        scanf("%d", &valor);
        vet[i] = valor;
    }

    for(int i = 0; i<10; i++){
        if(vet[i] % 2 == 0){
            printf("%d", vet[i]);
        }
    }


    return 0;
}