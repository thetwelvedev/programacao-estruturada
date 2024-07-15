//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
//Escreva um programa que leia um número inteiro positivo N e em seguida imprima N linhas do chamado triângulo de Floyd:

#include <stdio.h>

int main()
{
    int valor = 1, number;
    printf("Digite um numero inteiro: ");
    scanf("%d",&number);

    for (int i = 1; i < number + 2; i++)
    {
        for (int j = 1; j < i; j++)
        {
            printf("%d ",valor);
            valor ++;
        }
        printf("\n");
    }
    
    return 0;
}