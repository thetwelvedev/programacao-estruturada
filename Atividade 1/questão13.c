//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
//Faça um programa que leia um caractere do tipo char e depois o imprima entre aspas duplas. Assim, se o caractere lido for a letra A, deverá ser impresso “A”.

#include <stdio.h>

int main() {
    char a;//Declarei a variável para utilizarmos futuramente 
    printf("Escreva uma letra de A a Z: ");
    scanf("%c", &a);
// o uso %c é para variável do tipo char e \" é para poder usar aspas
    printf("\"%c\"", a);
    return 0;
}