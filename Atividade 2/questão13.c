//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
//Sejam a e b os catetos de um triângulo cuja hipotenusa h é obtida pela equação: h = raiz de (a²+b²)
//Faça um programa que leia os valores de a e b, e calcule o valor da hipotenusa através da fórmula dada. Imprima o resultado.

#include <stdio.h>
#include <math.h>

int main() {
    float h, a, b;

    printf("Digite o valor do cateto a: ");
    scanf("%f", &a);
    fflush(stdin);
    printf("Digite o valor do cateto b: ");
    scanf("%f", &b);

    h = sqrt(pow(a,2) + pow(b,2));//sqrt() é raiz quadrada e pow() é potência

    printf("A hipotenusa vale %2.f", h);
    return 0;
}