//Nome: Leonardo Vinícius Lima Castro Matrí­cula: 2022009946
//Faça um programa que leia dois números inteiros e depois os imprima na ordem inversa em que eles foram lidos.

#include <stdio.h>

int main() {
    int a;
    int b;
    
    printf("Digite um numero: ");
    scanf("%d", &a);
    printf("Digite um outro numero: ");
    scanf("%d", &b);
    printf("Ordem inversa: %d e %d", b, a);//Apenas coloquei as variáveis que eu li a ordem inversa, a que eu li primeiro em último e a que eu li segundo em primeiro
    return 0;
}