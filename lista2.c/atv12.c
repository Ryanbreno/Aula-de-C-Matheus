#include <stdio.h>


int main(){
    #include <stdio.h>

int main(){

    int matriz_A[2][2], matriz_B[2][2];

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            scanf("%d", &matriz_A[i][j]);
        }
    }

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            scanf("%d", &matriz_B[i][j]);
        }
    }

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("%d ", matriz_A[i][j] + matriz_B[i][j]);
        }
    }

    return 0;
}
