//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
// Escreva um programa que leia uma string do teclado e converta todos os seus caracteres em maiúscula. Dica: subtraia 32 dos caracteres cujo código ASCII está entre 97 e 122.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Digite uma palavras: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= 97 && str[i] <= 122) {
            printf("%c", str[i] - 32);
        } else {
            printf("%c", str[i]);
        }
    }

    return 0;
}