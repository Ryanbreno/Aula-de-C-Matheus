#include <stdio.h>


int main(){
    int n;
    printf("digite: ");
    scanf("%d", &n);

    if(n > 0){
        printf("POSITIVO! ");
    }
    else if(n == 0){
        printf("zero");
    }
    else{
        printf("NEGATIVO! ");

    }
    return 0;
}