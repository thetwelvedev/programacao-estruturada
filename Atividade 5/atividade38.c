//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
//Construa um programa que leia duas strings do teclado. Imprima uma mensagem informando quantas vezes a segunda string lida está contida dentro da primeira.

#include <stdio.h>
#include <string.h>

int main() {
    char firstStr[50];
    char secondStr[50];
    int occurrences = 0;

    printf("Primeira palavra: ");
    fgets(firstStr, sizeof(firstStr), stdin);
    firstStr[strlen(firstStr) - 1] = '\0';

    printf("Segunda palavra: ");
    fgets(secondStr, sizeof(secondStr), stdin);
    secondStr[strlen(secondStr) - 1] = '\0';

    char* p = strstr(firstStr, secondStr);

    while (p != NULL) {
        occurrences++;

        p = strstr(p + strlen(secondStr), secondStr);
    }

    printf("A segunda palavra apareceu %d na primeira.", occurrences);

    return 0;
}
