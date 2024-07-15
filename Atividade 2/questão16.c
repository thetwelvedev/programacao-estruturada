//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
//Escreva um programa que leia um número inteiro e mostre a multiplicação e a divisão desse número por dois (utilize os operadores de deslocamento de bits).

#include <stdio.h>

int main() {
    int a;

    printf("Digite um numero inteiro: ");
    scanf("%d", &a);
    
    printf("O numero inteiro dividido por 2 fica %d e multiplicado por 2 fica %d", a>>1, a<<1);//bit a bit para direita divide e para esquerda multiplica
    
    return 0;
}