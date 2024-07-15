//Nome: Leonardo Vinícius Lima Castro Matrí­cula: 2022009946
//Faça um programa que leia um número inteiro e depois o imprima usando o operador “%f”. Veja o que aconteceu.

#include <stdio.h>

int main() {
    int a; //Vai apenas armazenar valores inteiros
    printf("Escreva um numero: ");
    scanf("%d", &a);
    printf("Valor lido: %f", a);//Ele não imprimo o valor como float apenas imprime 0.000000
    return 0;
}

