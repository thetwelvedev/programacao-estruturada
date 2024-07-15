//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
//Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de 0 até N em ordem crescente.

#include <stdio.h>

int main() {
    int n, cont;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    cont = 0;
    while(n >= cont){//Tive que colocar maior ou igual pois tem o 0, e coloquei o contador depois do print para só somar depois do primeiro loop.
        printf("%d\n", cont);
        cont+=1;//Vai somando 1 até chegar o número inteiro pedido
    }
    return 0;
}