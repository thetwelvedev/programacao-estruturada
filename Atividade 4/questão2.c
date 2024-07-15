//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
//Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de 0 até N em ordem decrescente.

#include <stdio.h>

int main() {
    int n, i;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    i = n;
    for(n; i+1; i--){//Tive que colar o inicial como o maior valor; Coloquei  i + 1 pois aumenta a qauntidade de algoritmo e não interfere no valor do algoritmo; coloquei o incremento de -1
        printf("%d\n", i);
    }
    return 0;
}
