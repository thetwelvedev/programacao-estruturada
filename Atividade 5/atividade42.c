//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
// Escreva um programa que recebe uma string S e dois valores inteiros não negativos i e j. Em seguida, imprima os caracteres contidos no segmento que vai de i a j da string S.

#include <stdio.h>
#include <string.h>

int main() {
    char s[50];
    int i, j;

    printf("Digite um número: ");
    fgets(s, sizeof(s), stdin);

    s[strlen(s) - 1] = '\0';

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &i);

    printf("Agora outro numero positivo: ");
    scanf("%d", &j);

    for (i; i <= j; i++) {
        printf("%c", s[i]);
    }

    return 0;
}