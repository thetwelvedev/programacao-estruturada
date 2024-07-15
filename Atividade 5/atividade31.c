//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
//Faça um programa que leia uma string e imprima as quatro primeiras letras dela.

#include <stdio.h>

int main() {
    char str[20];

    printf("Digite uma palavra: ");
    scanf("%s", str);

    printf("As 4 primeiras letras sao: ");
    for (int i = 0; i < 4; i++) {
        printf("%c", str[i]);
    }

    return 0;
}