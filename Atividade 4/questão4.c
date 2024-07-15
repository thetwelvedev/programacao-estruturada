//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
//Faça um programa que determine e mostre os cinco primeiros múltiplos de 3 considerando números maiores que 0.

#include<stdio.h>

int main()
{
    int number = 3, count = 5;//Começa do 3 e são 5 números por isso o contador.
    
    for (int i = 0; i < count; i++)
    {
        printf("%d\n",number);
        number += 3;//soma com 3 para gerar os múltiplos dele
    }
    return 0;
}