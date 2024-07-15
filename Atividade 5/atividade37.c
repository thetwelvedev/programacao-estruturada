//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
// Construa um programa que leia duas strings do teclado. Imprima uma mensagem informando se a segunda string lida está contida dentro da primeira.

#include <stdio.h>
#include <string.h>

int main() {
    char firstStr[20];
    char secondStr[20];

    printf("Primeira palavra: ");
    fgets(firstStr, sizeof(firstStr), stdin);

    printf("Segunda palavra: ");
    fgets(secondStr, sizeof(secondStr), stdin);

    if (strstr(firstStr, secondStr)) {
        printf("A primeira palavra esta dentro da segunda.");
    } else {
        printf("A segunda palavra esta dentro da primeira.");
    }

    return 0;
}