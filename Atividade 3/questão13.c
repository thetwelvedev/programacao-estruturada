//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
//Faça um programa que mostre ao usuário um menu com quatro opções de operações matemáticas (as operações básicas, por exemplo). O usuário escolhe uma das opções, e o seu programa pede dois valores numéricos e realiza a operação, mostrando o resultado.

#include <stdio.h>

int main() {
    char op;
    float a, b;
    
    printf("Escolha um operacao[+,-,*,/]: ");
    scanf("%c", &op);
    fflush(stdin);
    printf("Digite 2 numeros: ");
    scanf("%f%f", &a, &b);

    
    switch (op){//Cada caso vai realizar sua operação correspondente
        case '+':{
            float soma = a + b;
            printf("%.2f + %.2f = %.2f ", a, b, soma);
        }
            break;
        case '-':{
            float sub = a - b;
            printf("%.2f - %.2f = %.2f ", a, b, sub);
        }
            break;
        case '*':{
            float mult = a * b;
            printf("%.2f * %.2f = %.2f ", a, b, mult);
        }
            break;
        case '/':{
            float div = a / b;
            printf("%.2f / %.2f = %.2f ", a, b, div);
        }
            break;
        default: printf("So temos essas 4 operacoes");
            break;
    
    }
    return 0;
}
