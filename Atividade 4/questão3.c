//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
//Faça um programa que leia um número inteiro N e depois imprima os N primeiros números naturais ímpares.

#include <stdio.h>

int main() {

    int n ,val = 1;
    
    printf("Digite um numero qualquer: ");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)//Vai de 0 até o i ser maior que o número(ex.; coloquei 5, o loop vai fazer 5 vezes pois quando i = 6 vai parar.)
    {
        printf("%d\n",val);
        val += 2;//O valor começa em 1 vai soma de dois em dois permanecendo impar
    }
    return 0;
}