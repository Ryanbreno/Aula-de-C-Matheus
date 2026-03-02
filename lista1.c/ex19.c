#include <stdio.h>

//19) Imprima a tabuada completa de 1 até 10 (loop dentro de loop).

int main(){

    printf("----------TABUADA---------- \n");

    for(int i = 1; i <=10; i++){
        for(int j = 0; j <=10; j++){
            printf("%d x %d = %d\n", i, j, i * j);
        }
        
    }

    
}