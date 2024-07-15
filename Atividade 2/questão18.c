//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
//Elabore um programa que leia dois números inteiros e exiba o deslocamento, à esquerda e à direita, do primeiro número pelo segundo.

#include <stdio.h>

int main() {
    int a, b;

    printf("Digite um numero inteiro: ");
    scanf("%d", &a);
    printf("Digite um outro numero: ");
    scanf("%d", &b);

    printf("%d\n%d", a<<=b, a>>=b);//Usei o exmplo da tabela de OPERADORES DE ATRIBUIÇÃO SIMPLIFICADA da Aula 4-slide 22
}