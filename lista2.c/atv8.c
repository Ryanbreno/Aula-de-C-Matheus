#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool string_iguais(char string_1[], char string_2[]){
    if(strcmp(string_1,string_2) == 0){
        return true;
    }
    return false;
}


int main(){
    char string_1[100];
    char string_2[100];

    printf("digite a string1: ");
    scanf("%s", string_1);
    printf("digite a string2: ");
    scanf("%s", string_2);

    if(string_iguais(string_1, string_2) == true){
        printf("sao iguais! ");
    }
    else{
        printf("nao é igual");
    }
    return 0;
}