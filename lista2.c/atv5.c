#include <stdio.h>

int tamanho_string(char str[]){
    int soma =0;
    for(int i = 0; str[i] != '\0'; i++){
        soma++;
    }
    return soma;
}



int main(){

    char texto[100];
    printf("digite string: ");
    scanf("%s", texto);
    int tamanho = tamanho_string(texto);
    printf("o tamanho é: %d", tamanho);


    return 0;
}