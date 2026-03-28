#include <stdio.h>

int soma_matriz(int mat[3][3]) {
    int soma = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            soma += mat[i][j];
        }
    }
    return soma;
}

int main() {
    int matriz[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Digite o valor para [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    int total = soma_matriz(matriz);
    printf("A soma de todos os elementos da matriz é: %d\n", total);

    return 0;
}