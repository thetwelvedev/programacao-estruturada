//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
//Faça um programa que leia dois números e mostre o maior deles. Se, por acaso, os dois números forem iguais, imprima a mensagem “Números iguais”.

#include <stdio.h>

int main() {
    int x, y;
    printf("Digite um numero: ");
    scanf("%d", &x);
    printf("Digite outro numero: ");
    scanf("%d", &y);

    if(x > y){
        printf("O maior numero e o %d", x);
    }
    else if(x == y){
        printf("Numeros igauis");
    }
    else{
        printf("O maior numero e o %d", y);
    }
    return 0;
}