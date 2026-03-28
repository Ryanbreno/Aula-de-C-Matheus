#include <stdio.h>
#include <stdbool.h>

int tamanho_string(char str[]){
    int soma =0;
    for(int i = 0; str[i] != '\0'; i++){
        soma++;
    }
    return soma;
}

bool e_palidromo(char str){
    int inicio = 0;
    int fim = tamanho_string(str) -1;

    while(inicio < fim){
        if(str[inicio] != str[fim]){
            return false;
        }
        inicio++;
        fim--;
    }
    return true;
}


int main(){
    if(e_palidromo == true){
        printf("eh palidromo");
    }
    else{
        printf("nao eh palidromo");
    }
}