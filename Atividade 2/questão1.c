//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
//Faça um programa que leia um número inteiro e retorne seu antecessor e seu sucessor.

#include <stdio.h>

int main() {
    int a, x, y;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &a);
    
    x = a - 1; //Antecessor
    y = a + 1; //Sucessor

    printf("O antecessor: %d\nO sucessor: %d", x, y);
    return 0;
}