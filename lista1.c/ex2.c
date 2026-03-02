#include <stdio.h>

int main(){
    int n1, n2, soma, multi, sub;
    printf("digite 1 numero: ");
    scanf("%d", &n1);
    printf("digite 2 numero: ");
    scanf("%d", &n2);


    soma = n1 + n2;
    sub = n1 - n2;
    multi = n1 * n2;
    int div = n1 / n2;

    printf("SOMA É: %d\n" "Subtracao: %d \n" "Multiplicação: %d\n" "divisao : %d\n ", soma, sub, multi, div);
    return 0;
}