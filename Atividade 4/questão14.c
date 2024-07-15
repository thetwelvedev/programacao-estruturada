//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
//Escreva um programa que leia um número inteiro, maior ou igual a zero, do usuário. Imprima o enésimo termo da sequência de Fibonacci. Essa sequência começa no termo de ordem zero, e, a partir do segundo termo, seu valor é dado pela soma dos dois termos anteriores. Alguns termos dessa sequência são: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34.

#include<stdio.h>

int main()
{
    int num, val = 0,val2 = 1, val3 = 0;
    printf("Digite um numero: ");
    scanf("%d",&num); 
    
    if (num >= 0) //Tem que ser maior ou igual a 0
    {
        for (int i = 2; i < num; i++) // For de fibonacci
        {
            val3 = val + val2; 
            val = val2; 
            val2 = val3;
        }
        if (num = 1) 
        {
            printf("%d",val2); 
        }
        else
        {
        printf("%d",val3); 
        }
    }
    return 0;
}