#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef struct Aluno {
    char nome[100];
    float notas[3];

} Aluno;

float media_aluno(float notas[], int tamanho){
    float soma =0;
    for(int i = 0; i <tamanho; i++){
        soma += notas[i];
    }
    return soma / tamanho;
}

bool aprovado(float media){
    if(media >= 6){
        return true;
    }
    return false;
}

Aluno* buscar_aluno(Aluno *alunos, int tamanho, char nome[]){
    for(int i = 0; i < tamanho; i++){
        if(strcmp(alunos[i].nome, nome) == 0){
            return &alunos[i];
        }
    }
    return NULL;
}


int main(){

    
    int quantidade = 0;
    printf("quantos alunos deseja cadastrar: ");
    scanf("%d", &quantidade);
    
    Aluno *alunos = malloc(quantidade * sizeof(Aluno));

    for(int i = 0; i <quantidade; i++){
        printf("digite o nome: ");
        scanf("%s", alunos[i].nome);
        printf("digite a nota1: ");
        scanf("%f", &alunos[i].notas[0]);
        printf("digite a nota2: ");
        scanf("%f", &alunos[i].notas[1]);
        printf("digite a nota3: ");
        scanf("%f", &alunos[i].notas[2]);
    }

    // for(int i = 0; i <quantidade; i++){
    //     printf("nome: %s\n", alunos[i].nome);
    //     printf("nota1: %.2f\n", alunos[i].notas[0]);
    //     printf("nota2: %.2f\n", alunos[i].notas[1]);
    //     printf("nota3: %.2f\n", alunos[i].notas[2]);
    //     printf("media das notas: %.2f\n", media_aluno(alunos[i].notas, 3));
    //     if(aprovado(media_aluno(alunos[i].notas, 3))){
    //         printf("voce foi aprovado\n");
    //     }
    //     else{
    //         printf("foi reprovado! ");
    //     }
    // }
    char nome_buscar[100];

    printf("qual aluno deseja buscar? ");
    scanf("%s", nome_buscar);
    Aluno* aluno_encontrado = buscar_aluno(alunos, quantidade, nome_buscar);
    if(aluno_encontrado == NULL){
        printf("nao existe!\n");
    }
    else{
        printf("%s\n", aluno_encontrado->nome);
        printf("%.2f\n", aluno_encontrado->notas[0]);
        printf("%.2f\n", aluno_encontrado->notas[1]);
        printf("%.2f\n", aluno_encontrado->notas[2]);
        printf("media: %.2f\n", media_aluno(aluno_encontrado->notas, 3));


    }
    


    return 0;
}