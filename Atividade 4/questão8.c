//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
//8.Faça um programa que leia 10 inteiros e imprima sua média.

#include <stdio.h>

int main() {
    float valor, soma, media;
    for (int i = 0; i < 10; i++){
        printf("Digite um valor: ");
        scanf("%f", &valor);
        soma += valor;
        media = soma / 10;

    }
    printf("%.2f",media);
    
    return 0;
   
}