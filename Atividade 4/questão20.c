//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
//Faça um programa que leia um valor inteiro e positivo N, calcule e mostre o valor E, conforme a fórmula a seguir: E=1/1!+1/2!+...+1/N!

#include <stdio.h>

int main(void){
    float Soma, E;
    int N , valor = 1;

    printf("Digite um numero inteiro e positivo: ");
    scanf("%d", &N);
    fflush(stdin);

    for (int i = 1; i < N; i++)
    {
        for (int j = 1; j < i; j++)
        {
            valor += j;
        }
        Soma = 1/valor;
        E = E + Soma;
    }
    
    printf("%.2f", E);

    return 0;
}