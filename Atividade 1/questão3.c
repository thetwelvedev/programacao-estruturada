//Nome: Leonardo Vinícius Lima Castro Matrí­cula: 2022009946
//Escreva um programa que leia um número inteiro e depois imprima a mensagem
//“Valor lido:”, seguido do valor inteiro. Use apenas um comando printf().

#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);//Leitura do número inteiro
    printf("Valor lido: %d", x);// Uso apenas de um printf()
    return 0;
}