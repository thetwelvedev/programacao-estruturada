//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
//Faça um programa que leia um número real e imprima a quinta parte desse número.

#include <stdio.h>

int main() {
    float a, q;
    
    printf("Digite um numero em float: ");
    scanf("%f", &a);
    
    q = a / 5;//A quinta parte de "a"

    printf("A quinta parte de %.2f e %.2f", a, q);
    return 0;
}