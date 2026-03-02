#include <stdio.h> 

int main(){
    int n1, n2, n3;

    printf("digite: ");
    scanf("%d", &n1);
    printf("digite: ");
    scanf("%d", &n2);
    printf("digite : ");
    scanf("%d", &n3);



    if(n1 > n2 && n1 > n3){
        printf("%d é o maior", n1);
    }
    else if(n2 > n1 && n2 > n3){
        printf("%d é o maior ", n2);
    }
    else{
        printf("%d é o maior: ", n3);
    }
}