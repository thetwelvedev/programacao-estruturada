//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
//17.Elabore uma função que receba como parâmetro um valor inteiro n e gere como saída um triângulo lateral formado por asteriscos conforme o exemplo a seguir, em que usamos n = 4:

#include <stdio.h>

void triangulo(int number)
{
    char asterisk = '*';

    for (int i = 1; i <= number; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c", asterisk);
        }
        printf("\n");
    }

    for (int i = number - 1; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c", asterisk);
        }
        printf("\n");
    }
}

int main()
{
    int number;
    printf("Digite um numero inteiro: ");
    scanf("%d", &number);

    triangulo(number);

    return 0;
}
