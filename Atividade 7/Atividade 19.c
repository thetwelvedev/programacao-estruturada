//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
//18.Faça uma função que receba como parâmetro o valor de um ângulo em graus e calcule o valor do cosseno desse ângulo usando a sua respectiva série de Taylor: em que x é o valor do ângulo em radianos. Considerar π = 3.1414592 e n variando de 0 até 5.

#include <stdio.h>
#include <math.h>

const float pi = 3.1414592;

int fat(int number)
{
    int result = 1;
    for (int i = 1; i <= number; i++)
    {
       result *= i;
    }
    return result;
}


float angulos(float rad) // função para a formulo do Cosx
{
    float s = 0;

    for (int i = 0; i < 5; i++)
    {
        s += (pow((-1),i)/fat((2*i)))*pow(rad,2*i);
    }
    
    return s;
}

int main()
{
    int angle;
    float result;
    printf("Digite o angulo em radianos: ");
    scanf("%d", &angle);

    result = angulos(angle);

    printf("O valor Cos x = %.2f",result);

    return 0;
}