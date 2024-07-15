//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
//Leia uma string do teclado e conte quantas vogais (a, e, i, o, u) ela possui. Entre com um caractere (vogal ou consoante) e substitua todas as vogais da palavra dada por esse caractere. Ao ﬁnal, imprima a nova string e o número de vogais que ela possui.

#include <stdio.h>
#include <string.h>

int main() {
    char str[20];
    char charescolha;
    int vogalcontador;

    printf("Digite uma palavra: ");
    fgets(str, 20, stdin);

    printf("Digite uma letra: ");
    scanf("%c", &charescolha);

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            str[i] = charescolha;
        }
    }

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            vogalcontador++;
        }
    }

    printf("A nova string %s e tem %d vogais.", str, vogalcontador);

    return 0;
}