//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
//11. Leia o valor do raio de um círculo. Calcule e imprima a área do círculo correspondente.
//A área do círculo é A = π* raio2, sendo π = 3.141592.

#include <stdio.h>
#include <math.h>//Biblioteca de matemática
#define pi 3.141592
int main() {
    float a, r;

    printf("Digite o raio: ");
    scanf("%f", &r);

    a = pi * pow(r,2);//pow(a,2) significa a²

    printf("A area fica %.2f", a);
    return 0;
}