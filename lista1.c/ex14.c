#include <stdio.h>

 //14) Faça um programa que calcule a potência (base e expoente) sem usar pow().
int main(){
    int base;
    int potencia = 0;
    int resultado = 1;
    printf("digite a base: ");
    scanf("%d", &base);
    printf("digite a potencia: ");
    scanf("%d", &potencia);

    for(int i = 0; i < potencia; i++){
        resultado = resultado * base;
    }
    printf("%d elevado a %d é :%d\n", base, potencia, resultado);
}