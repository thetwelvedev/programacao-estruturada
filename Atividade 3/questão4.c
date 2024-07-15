//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
//Faça um programa que leia o salário de um trabalhador e o valor da prestação de um empréstimo. Se a prestação:
//• For maior que 20% do salário, imprima: “Empréstimo não concedido.”
//• Caso contrário, imprima: “Empréstimo concedido.”

#include <stdio.h>

int main() {
    float salario, prestacao;

    printf("Qual o seu salario? ");
    scanf("%f", &salario);
    printf("Qual o valor da prestacao? ");
    scanf("%f", &prestacao);

    if(prestacao > (salario/5)){//1/5 de um número é a mesma coisa que 20% 
        printf("Emprestimo nao concedido");
    }
    else{
        printf("Emprestimo concedido");
    }
    return 0;
}