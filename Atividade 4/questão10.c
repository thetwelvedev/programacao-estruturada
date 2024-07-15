//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
//Faça um programa que leia 10 inteiros positivos, ignorando não positivos, e imprima sua média.

#include <stdio.h>

int main() {
    float valor, media, soma, qtd = 0;
        for (int i = 0; i < 10; i++){
            printf("Digite um valor: ");
            scanf("%f", &valor);

            if(valor > 0){
                qtd++;
                soma += valor;
                media = soma / qtd;
            }
        
        }
        printf("%.2f",media);
        
        return 0;
}