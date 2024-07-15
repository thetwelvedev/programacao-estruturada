//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
//16.Elabore uma função que receba como parâmetro um valor inteiro n e gere como saída n linhas com pontos de exclamação, conforme o exemplo a seguir, em que usamos n = 5:

#include <stdio.h>

void linhas(int n)
{
    char excla = '!';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%c", excla);
        }
        printf("!\n");
    }
    
}

int main()
{
    int number;
    printf("Digite um numero inteiro: ");
    scanf("%d",&number);

    linhas(number);

    return 0;
}