//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
//Leia uma velocidade em km/h (quilômetros por hora) e apresente convertida em m/s (metros por segundo). A fórmula de conversão é M = K/36, sendo K a velocidade em km/h e M em m/s.

#include <stdio.h>

int main() {
    float K, M;

    printf("Digite uma velocidade(km/h): ");
    scanf("%f", &K);

    M = K / 3.6;//Para converter de km/h para m/s precisa dividir o valor de km/h por 3.6

    printf("%.2f km/h convertendo fica %.2f m/s.", K, M);
    return 0;
}