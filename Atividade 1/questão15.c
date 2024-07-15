//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
//Escreva um programa que leia três variáveis: char, int e float. Em seguida,cimprima-as de três maneiras diferentes: separadas por espaços, por uma tabulação horizontal e uma em cada linha. Use um único comando printf() para cada operação de escrita das três variáveis.

#include <stdio.h>

int main() {
    char a;
    int b;
    float c;

    printf("Escreva uma unica letra: ");
    scanf("%c", &a);
    printf("Escreva um numero inteiro: ");
    scanf("%d", &b);
    printf("Escreva um numero como(ex.:1.34): ");
    scanf("%f", &c);
    
    printf("%c %d %.2f\n", a, b, c);// Apenas separei por espaço mesmo usando o botão do teclado(space)
    printf("\t%c\t%d\t%.2f", a, b, c);// o \t é usado para tabulação horizontal
    printf("\n%c\n%d\n%.2f", a, b, c);// o \n é para ir para um nova linha tudo que está após
    return 0;
}