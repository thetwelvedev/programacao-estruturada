//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
//Leia quatro valores do tipo float. Calcule e exiba a média aritmética desses valores.

#include <stdio.h>

int main() {
    float a, b, c, d, m;
    
    printf("Digite 3 numeros inteiros separando por espaco(Ex.: 1.11 2.22 3.33 4.44): ");
    scanf("%f %f %f %f", &a, &b, &c, &d);

    m = (a + b + c + d) / 4;

    printf("A media dos 4 numeros deu: %.2f", m);
    return 0;
}