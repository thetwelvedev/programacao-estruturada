//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
// 12.Escreva uma função que receba um número inteiro positivo n. Calcule e retorne o somatório de 1 até n: 1 + 2 + 3 + ... + n.

#include <stdio.h>

void somatorio(int n)
{
    int resultado = 0;

    for (int i = 1; i < n; i++)
    {
        printf("%d+",i);
        resultado +=i;
    }
    printf("%d = %d", n, resultado + n);
}
int main()
{
    int n; 
    printf("Digite um numero inteiro: ");
    scanf("%d",&n);

    somatorio(n);

    return 0;
}