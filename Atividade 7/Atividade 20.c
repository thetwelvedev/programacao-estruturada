//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
//20.Faça uma função que calcule e retorne o número neperiano e, e = 2,71828183, usando a série a seguir: A função deve ter como parâmetro o número de termos que serão somados, N. Note que quanto maior esse número, mais próxima do valor e estará a resposta.

#include <stdio.h>

int fat(int number)
{
    int result = 1;
    for (int i = 1; i <= number; i++)
    {
       result *= i;
    }
    return result;
}

double e(int n)// função do numero neperiano
{
    double value = 0;

    for (int i = 0; i < n; i++)
    {
        value += (1.0/fat(i));
    }
    return value;
}

int main()
{
    int number;
    double result;
    printf("Digite um valor inteiro: ");
    scanf("%d",&number);

    result = e(number);

    printf("E = %lf",result);

    return 0;
}