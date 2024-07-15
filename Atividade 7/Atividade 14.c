//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
//15.Escreva uma função que receba um número inteiro positivo n. Calcule e retorne o seu fatorial n!: n! = n * ( – 1) * (n – 2) * ... * 1.*/

#include<stdio.h>

void fat(int n)
{
    int resultado = 1;
    for (int i = 1; i <= n; i++)
    {
       resultado *= i;
    }
    printf("%d! = %d", n, resultado);
}

int main()
{
    int n;
    printf("Digite um numero qualquer: ");
    scanf("%d",&n);
    fat(n);

    return 0;
}