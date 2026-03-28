#include <stdio.h>



int main(){
    int n = 3;
    int soma =0;
    int matriz[n][n];

    for(int i = 0; i < n; i++ ){
        for(int j = 0; j < n; j++){
            printf("digite o valor;");
            scanf("%d", &matriz[i][j]);
        }
    }

    for(int i = 0; i < n; i++ ){
        for(int j = 0; j < n; j++){
            if(i+j == 2){
                soma += matriz[i][j];
            }
        }
    }

    printf("soma dos valores da diagonal segundaria: %d", soma);

}

    //0 1 2/
//0// 1 2 3
//1/ 4 5 6
//2/ 7 8 9