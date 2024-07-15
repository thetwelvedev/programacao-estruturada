//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
//12. Leia a altura e o raio de um cilindro circular e imprima o volume desse cilindro.
//O volume de um cilindro circular é calculado por meio da seguinte fórmula: V = pi*r²*altura em que π = 3.141592

#include <stdio.h>
#include <math.h>
#define pi 3.141592

int main() {
    float h, r, v;

    printf("Digite a altura do cilindro: ");
    scanf("%f", &h);
    fflush(stdin);
    printf("Digite o raio do cilindro: ");
    scanf("%f", &r);

    v = pi * pow(r,2) * h;

    printf("O volume do cilindro fica %.2f", v);
    return 0;
}