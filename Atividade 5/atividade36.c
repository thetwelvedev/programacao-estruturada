//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
//Faça um programa que leia uma string e imprima uma mensagem dizendo se ela é um palíndromo ou não. Um palíndromo é uma palavra que tem a propriedade de poder ser lida tanto da direita para a esquerda como da esquerda para a direita. Exemplos: ovo, arara, rever, asa, osso etc.*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[20];
    char strBackwards[20];
    
    printf("Digite uma palavra: ");
    fgets(str, sizeof(str), stdin);

    str[strlen(str) - 1] = '\0';

    for (int i = 0, j = strlen(str) - 1; i < strlen(str); i++, j--) {
        strBackwards[i] = str[j];
    }

    if (strcmp(str, strBackwards) == 0) {
        printf("%s e palindromo", str);
    } else {
        printf("%s nao e palindromo.", str);
    }

    return 0;
}