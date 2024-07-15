//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
//Escreva um programa que leia um número inteiro e calcule a soma de todos os divisores desse número, com exceção dele próprio. Exemplo: A soma dos divisores do número 66 é 1 + 2 + 3 + 6 + 11 + 22 + 33 = 78

#include <stdio.h>

int main() {
    int num, soma = 0;

    printf("Digite um numero: ");
    scanf("%d",&num);

    for (int i = 1; i < num; i++){// i vai aumentando até chegar no número e não usei o num + 1 pois não vai precisar dele na soma
     
        if (num%i == 0){//Vai dividindo o número e só printa quando ele é divísivel(resto 0), no caso printa o divisor
            soma += i;
        }
    }
    printf("A soma dos divisores de %d = %d", num, soma);
    return 0; 
}