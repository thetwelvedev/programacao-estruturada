//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
//Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.

#include <stdio.h>

int main() {
   int v = 0, count = 50, soma;
    for(int i = 0; i < count; i++)// O loop para quando i for 51, então vi ter só os 50 loop necessários
    {v += 2;
    soma = soma + v;// Pego valor anterior e somo ele ao novo
    }
    printf("%d",soma);
    
    return 0;
}