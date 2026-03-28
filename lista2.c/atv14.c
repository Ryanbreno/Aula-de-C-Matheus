#include <stdio.h>

void inversor(int mat[3][3]){
    for(int i = 0; i <3; i++){
        for(int j = 0; j <3; j++){
            if(mat[i][j] < 0){
                mat[i][j] = -mat[i][j];
            }
        }
    }
}



int main(){

    int matriz[3][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("digite: ");
            scanf("%d", &matriz[i][j]);
        }
    }

    inversor(matriz);


    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
    

}