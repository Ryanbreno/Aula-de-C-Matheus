#include <stdio.h>
#include <string.h>


int tamanho_string(char str[]){
    int soma =0;
    for(int i = 0; str[i] != '\0'; i++){
        soma++;
    }
    return soma;
}

int main(){

    char nomes[5][100];
    int maior = 0;
    char maior_nome[100];



    for(int i = 0; i <5; i++){
        printf("digite o nome: ");
        scanf("%s", nomes[i]);
    }
    
    for(int i = 0; i <5; i++){
        int tam = tamanho_string(nomes[i]);
        if(tam > maior){
            maior = tam;
            strcpy(maior_nome, nomes[i]);
        }
    }
    printf("o maior nome é: %s", maior_nome);



    return 0;
}