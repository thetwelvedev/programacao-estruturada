//Nome: Leonardo Vinícius Lima Castro Matrí­cula: 2022009946
//Faça um programa que leia um valor do tipo float e depois o imprima usando o operador “%d”. Veja o que aconteceu

#include <stdio.h>

int main() {
    float a; //Vai apenas armazenar valores reais
    printf("Escreva um numero: ");
    scanf("%f", &a);
    printf("Valor lido: %d", a);//Ele não imprimo o valor como float apenas imprime 0
    return 0;
}