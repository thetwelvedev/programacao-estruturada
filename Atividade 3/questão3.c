//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
//Faça um programa que leia um número inteiro e verifique se esse número é par ou ímpar.

#include <stdio.h>

int main() {
    int a;

    printf("Digite um numero: ");
    scanf("%d", &a);

    if(a%2 == 0){
        printf("O numero e par");
    }
    else{
        printf("O numero e impar");
    }
    return 0;
}