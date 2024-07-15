//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
//Faça um programa que leia um valor em reais e a cotação do dólar. Em seguida, imprima o valor correspondente em dólares.

#include <stdio.h>

int main() {
    float real, conversor, dolar;

    printf("Digite um valor em real: ");
    scanf("%f", &real);
    printf("Valor da cotacao do dolar: ");//A cotação no dia da elaboração desse código é 5,25 reais
    scanf("%f", &conversor);

    dolar = real / conversor; //O valor do dólar é obtido pela divisão do valor em real pela cotação do dolar
    
    printf("Valor em dolar de R$%.2f fica US$%.2f", real, dolar);
    return 0;
}