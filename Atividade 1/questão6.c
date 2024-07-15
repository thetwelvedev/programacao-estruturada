//Nome: Leonardo Vinícius Lima Castro Matrí­cula: 2022009946
//Faça um programa que leia um valor do tipo double e depois o imprima na forma de notação científica.

#include <stdio.h>

int main() {
    double x; //Armazena valores reais muito grandes
    printf("Digite um numero: ");
    scanf("%lf", &x);
    printf("O valor em notacao cientifica: %e", x);
    return 0;
}