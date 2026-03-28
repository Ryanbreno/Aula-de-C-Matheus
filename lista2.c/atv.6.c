#include <stdio.h>

int contagem_vogais(char str[]){
    int conta_vogais =0;
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == 'a' || str[i] == 'A' || 
        str[i] == 'o' || str[i] == 'O' || str[i] == 'e' || 
        str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] == 'u' || str[i] == 'U'){
            conta_vogais++;
        }
    }
    return conta_vogais;

}

int main(){
    char texto[100];
    printf("digite algo: ");
    scanf("%s", texto);

    int contador = contagem_vogais(texto);
    printf("tem %d de vogais ", contador);


    return 0;
}