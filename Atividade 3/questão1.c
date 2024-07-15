//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
//Faça um programa que leia dois números e mostre qual deles é o maior.

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
    else{
        printf("O maior numero e o %d", y);
    }
    return 0;
}