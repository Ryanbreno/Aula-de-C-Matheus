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
    int identidade = 1;
    for(int i = 0; i < n; i++ ){
        for(int j = 0; j < n; j++){
            if(i == j && matriz[i][j] != 1){
                identidade = 0;
            }
            if(i != j && matriz[i][j] != 0){
                identidade = 0;
            }
        }
    }

    if(identidade == 1){
        printf("Matriz identidade\n");
    } else {
        printf("Nao eh matriz identidade\n");
    }

    return 0;
    

}

    //0 1 2/
//0// 1 2 3
//1/ 4 5 6
//2/ 7 8 9