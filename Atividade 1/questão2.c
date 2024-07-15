//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
//Escreva um programa que leia um número inteiro e depois o imprima.

#include <stdio.h>

int main() {
    int a; //declarei a variável
    
    printf("Digite um numero: ");
    scanf("%d", &a); //Aqui eu leio e dou valor para variável
    printf("O numero digitado foi %d", a); //Imprimo a variável que agora tem um valor
    return 0;
}