//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
//Em matemática, o número harmônico designado por Hn define-se como o enésimo termo da série harmônica. Ou seja: . Apresente um programa que calcule o valor de qualquer Hn.

#include <stdio.h>

int main() {
    float hn = 1, soma = 1;
    int number;

    printf("Digite um numero: ");
    scanf("%d",&number);

    for (int i = 1; i < number; i++)
    {
        hn = 1 / i;
        soma = soma + hn;
    }
    printf("%.2f", soma);

    return 0;
}