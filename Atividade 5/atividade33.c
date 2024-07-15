//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
//Faça um programa que leia uma string e a imprima de trás para a frente.
#include <stdio.h>
#include <string.h>

int main() {
    char str[20];

    printf("Digite uma palavra: ");
    scanf("%s", str);

    for (int i = strlen(str); i > -1; i--) {// Aqui que inverte cada posição
        printf("%c", str[i]);
    }

    return 0;
}