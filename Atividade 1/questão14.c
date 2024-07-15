//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
//Faça um programa que leia três caracteres do tipo char e depois os imprima um em cada linha. Use um único comando printf() para isso.

#include <stdio.h>

int main() {
    char a, b, c;//Pode declarar mais de uma variável em um único tipo de váriavel nesse caso é a char
    
    printf("Escreva uma letra de A a Z: ");
    scanf("%c", &a);
    fflush(stdin);//Serve para limpar o buffer pois não limpa automático
    printf("Escreva novamente uma letra de A a Z: ");
    scanf("%c", &b);
    fflush(stdin);
    printf("Escreva mais uma letra de A a Z: ");
    scanf("%c", &c);

    printf("%c\n%c\n%c", a, b, c); //Usei o comando \n para pular linha(a partir do \n se cria uma linha nova)
    return 0;
}
