//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
//12.Escreva uma função que receba um número inteiro positivo e retorne o maior fator primo desse número.

#include <stdio.h>

int primo(int n)
{
    if (n <= 1){
        return 0;
    }
    for (int i = 2; i * i <= n; i++){
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int fator(int n)
{
    int res = 0;
    for (int i = n; i >= 2; i--){
        if (n % i == 0 && primo(i) == 1)
        {
           res = i;
           break;
        }
    }
    return res;
}

int main()
{
    int num, res;
    printf("Digite um valor qualquer inteiro: ");
    scanf("%d",&num);

    res = fator(num);

    printf("O fator primo de %d e: %d",num,res);

    return 0;
}