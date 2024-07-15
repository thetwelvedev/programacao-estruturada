//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
// Escreva um programa que leia duas strings e as imprima em ordem alfabética, a ordem em que elas apareceriam em um dicionário.

#include <stdio.h>
#include<string.h>

int main() {
    char firstStr[50];
    char secondStr[50];
    char temp[50];

    printf("Primeira string: ");
    fgets(firstStr, sizeof(firstStr), stdin);
    firstStr[strlen(firstStr) - 1] = '\0';

    printf("Segunda string: ");
    fgets(secondStr, sizeof(secondStr), stdin);
    secondStr[strlen(secondStr) - 1] = '\0';

    if (strcmp(firstStr, secondStr) > 0) {
        strcpy(temp, firstStr);
        strcpy(firstStr, secondStr);
        strcpy(secondStr, temp);
    }

    printf("%s\n", firstStr);
    printf("%s\n", secondStr);

    return 0;
}