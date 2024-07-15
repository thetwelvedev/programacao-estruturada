//Nome: Leonardo Vinícius Lima Castro Matrí­cula: 2022009946
//Faça um programa que leia dois valores do tipo float. Use um único comando de leitura para isso. Em seguida, imprima os valores lidos na ordem inversa em que eles foram lidos.

#include <stdio.h>

int main() {
    float a;//Sempre declarar a váriavel do tipo certo
    float b;
    
    printf("Digite dois numero: ");
    scanf("%f %f", &a, &b);//Separar por espaço as máscaras
    printf("Ordem inversa: %f e %f", b, a);// Só inverti 'a' ordem, leio 'a' e depois 'b' e printei 'b' e depois 'a'
    return 0;
}