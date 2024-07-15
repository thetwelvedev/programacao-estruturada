//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
//Leia um valor que represente uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit. A fórmula de conversão é: F = C * (9.0/5.0) + 32.0, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.

#include <stdio.h>

int main() {
    float F, C;
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &C);

    F = C * (9.0/5.0) + 32.0;//fórmula de conversão de temperatura

    printf("A temperatura %.1f C fica %.1f F.", C, F);
    return 0;
}