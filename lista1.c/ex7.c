#include <stdio.h>


int main(){
    int n;
    printf("digite: ");
    scanf("%d", &n);

    for(int i = n; i >= 1; i--){
        printf("%d", i);
    }
    return 0;

}