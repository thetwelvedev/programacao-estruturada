//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
//Faça um algoritmo que leia um número positivo e imprima seus divisores. Exemplo: Os divisores do número 66 são: 1, 2, 3, 6, 11, 22, 33 e 66.

#include <stdio.h>

int main() {
    int num;

    printf("Digite um numero: ");
    scanf("%d",&num);

    printf("Os divisores de %d: ",num);

    for (int i = 1; i < num+1; i++){// i vai aumentando até chegar no número e tá num +1 pois tem que printar o próprio número também

    
        if (num%i == 0)//Vai dividindo o número e só printa quando ele é divísivel(resto 0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}