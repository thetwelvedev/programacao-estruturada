//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
//Faça um programa que leia três valores inteiros e mostre sua soma.

#include <stdio.h>

int main() {
    int a, b, c, s;
    
    printf("Digite 3 numeros inteiros separando por espaco(Ex.: 1 2 3): ");
    scanf("%d %d %d", &a, &b, &c);

    s = a + b + c;

    printf("A soma deu: %d", s);
    return 0; 
}