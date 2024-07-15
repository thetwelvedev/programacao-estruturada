//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
//15.Faça uma função que receba um inteiro N como parâmetro. Calcule e retorne o resultado da seguinte série  s: S= 2/4+5/5+...+(n^2+1/n+3)*/

#include <stdio.h>

void serie(int n)
{
    double soma = 0;

    for (int i = 1; i < n+1; i++)
    {
        soma += (double)(i*i+1)/(i+3);
    }

    printf("A soma do numero e: %.2lf",soma);

}

int main()
{
    int n;

    printf("Digite um numero inteiro: ");
    scanf("%d",&n);

    serie(n);

    return 0;
}