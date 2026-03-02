#include <stdio.h>


int main(){
    int bau_numeros[10];
    int limite = 10;
    int positivos = 0;
    
    for(int i = 0; i <10; i++){
        printf("digite o valor %d:\n", i);
        scanf("%d", &bau_numeros[i]);
    }
    for(int i = 0; i < 10; i++){
        if(bau_numeros[i] > 0){
            positivos += 1;
            }
    }

    printf("quantos numeros positivos: %d", positivos);

}