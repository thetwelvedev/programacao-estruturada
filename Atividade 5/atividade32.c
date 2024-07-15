//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
// Sem usar a função strlen(), faça um programa que leia uma string e imprima quantos caracteres ela possui.
#include <stdio.h>

int main() {
    char str[20];
    int count = 0;
    int i = 0;

    printf("Digite uma palavra: ");
    scanf("%s", str);

    while (str[i] != '\0') {// Como cada espaço de string vai até chegar no \0, quando chegar nele o loop para
        count++;
        i++;
    }

    printf("A palavra tem  %d caracteres\n.", count);

    return 0;
}