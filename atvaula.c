#include <stdio.h>

typedef struct Pessoa{
    char nome[100];
    int idade;
    float altura;
} Pessoa;

float media_altura(Pessoa pessoas[], int tamanho){
    float soma = 0;
    for(int i =0; i <tamanho; i++){
        soma += pessoas[i].altura;
    }
    return soma / tamanho;
}


int main(){

    Pessoa pessoas[3];

    for(int i = 0; i <3; i++){
        printf("digite seu nome: ");
        scanf("%s", pessoas[i].nome);
        printf("digite a idade: ");
        scanf("%d", &pessoas[i].idade);
        printf("digite a altura: ");
        scanf("%f", &pessoas[i].altura);
    }

    for(int i = 0; i <3; i++){
        printf("%s\n", pessoas[i].nome);
        printf("%d\n", pessoas[i].idade);
        printf("%f\n", pessoas[i].altura);
    }
    printf("media de alturas: %.2f", media_altura(pessoas, 3));

    return 0;
}