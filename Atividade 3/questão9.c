//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
//Faça um programa que leia a altura e o peso de uma pessoa. De acordo com a tabela a seguir, verifique e mostre qual a classificação dessa pessoa.

#include <stdio.h>

int main() {
    float altura, peso;

    printf("qual sua altura? ");
    scanf("%f", &altura);
    printf("qual seu peso? ");
    scanf("%f", &peso);

    if(altura < 1.20){
        if(peso < 60){
            printf("A");
        }
        else if((peso >= 60)&&(peso <= 90)){
            printf("D");
        }
        else if(peso > 90){
            printf("G");
        }
    }
    else if((altura >= 1.20)&&(altura <= 1.70)){
        if(peso < 60){
            printf("B");
        }
        else if((peso >= 60)&&(peso <= 90)){
            printf("E");
        }
        else if(peso > 90){
            printf("H");
        }
    }
    else if(altura > 1.70){
        if(peso < 60){
            printf("C");
        }
        else if((peso >= 60)&&(peso <= 90)){
            printf("F");
        }
        else if(peso > 90){
            printf("I");
        }
    }
    return 0;
}