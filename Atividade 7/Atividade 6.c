//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
// 6.Escreva uma função que receba o peso (quilos) e a altura (metros) de uma pessoa. Calcule e retorne o IMC (Índice de Massa Corporal) dessa pessoa: IMC=peso/(altura*altura).


#include <stdio.h>
#include <math.h>

float IMC(float peso,float altura)
{
    float imc;
    imc = peso/pow(altura, 2);
    return imc;
}
int main()
{
    float altura,peso;
    
    printf("Digite dois valores (peso(ex.: 70) e altura(ex.: 1.80)): ");
    scanf("%f %f", &peso, &altura);

    printf("IMC: %.2f",IMC(peso, altura));

    return 0;
}