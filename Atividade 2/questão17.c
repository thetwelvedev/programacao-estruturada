//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
//Escreva um programa que leia um número inteiro e mostre o seu complemento bit a bit.

#include <stdio.h>

int main() {
    int a;
    printf("Digite um numero inteiro: ");
    scanf("%d", &a);

    printf("%d", ~a);//~X para dar o complemento bit a bit tem que usar o ~
// Se eu colocar o valor inteiro 5 por exemplo vai sair -6, é o padrão que segue
}