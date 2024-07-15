//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
// 5.Escreva uma função para o cálculo do volume de uma esfera volume = 4/3*pi*r^3 em que π = 3.1414592 valor do raio r deve ser passado por parâmetro.

#include <stdio.h>
#include <math.h>

const float pi = 3.1414592;// Função pi

void Volume(float r,double vol)
{
    printf(" Digite o raio da esfera: ");
    scanf("%f",&r);
    vol = (4*pi*pow(r,3))/3;//Volume da esfera
    printf("O volume e: %.2f",vol);
}

int main()
{
    Volume(0,0);
    return 0;
}