//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
//7.Elabore um programa que peça ao usuário para digitar 10 valores. Some esses valores e apresente o resultado na tela.

#include <stdio.h>

int main() {
    float valor, resultado;
    for (int i = 0; i < 10; i++){
        printf("Digite um valor: ");
        scanf("%f", &valor);
        resultado += valor;

    }
    printf("%.2f",resultado);
    
    return 0;
}