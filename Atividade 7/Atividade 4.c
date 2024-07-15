//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
// 4.Escreva uma função que receba por parâmetro a altura e o raio de um cilindro circular e retorne o volume desse cilindro. O volume de um cilindro circular é calculado por meio da seguinte fórmula: em que π = 3.1414592

#include <stdio.h>
#include <math.h>
const float pi = 3.1414592;

void Volume(float r,float h)
{
    printf("O volume e: %.2f",pi*pow(r,2)*h);
}

int main()
{
    float r, h;
    printf("Digite o raio e a altura(ex: r e h respectivamente)");
    scanf("%f %f",&r,&h);

    Volume(r,h);

    return 0;
}