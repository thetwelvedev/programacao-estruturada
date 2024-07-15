//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
//Leia um ângulo em graus e apresente-o convertido em radianos. A fórmula de conversão é R = G * π/180, sendo G o ângulo em graus e R em radianos e π = 3.141592.

#include <stdio.h>

int main() {
    const float PI = 3.141592;// Ou eu utilizo #define π = 3.141592
    float R, G;

    printf("Digite um angulo: ");
    scanf("%f", &G);

    R = G * PI / 180;//Fórmula de conversão de graus para RAD

    printf("%.0f graus em radianos fica %.2f", G, R);
    return 0;
}