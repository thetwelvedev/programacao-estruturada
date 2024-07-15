//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
//Usando o comando switch, escreva um programa que leia um inteiro entre 1 e 7 e imprima o dia da semana correspondente a esse número. Isto é, domingo, se 1, segunda-feira, se 2, e assim por diante.

#include <stdio.h>

int main() {
    int semana;
    
    printf("Digite um numero de 1 a 7 e saiba o dia da semana  correspondente: ");
    scanf("%d", &semana);
    
    switch (semana){//Coloco 7 casos e cada um com printf do semana correspondente
        case 1:{
            printf("Domingo");
        }
            break;
        case 2:{
            printf("Segunda");
        }
            break;
        case 3:{
            printf("Terca");
        }
            break;
        case 4:{
            printf("Quarta");
        }
            break;
        case 5:{
            printf("Quinta");
        }
            break;
        case 6:{
            printf("Sexta");
        }
            break;
        case 7:{
            printf("Sabado");
        }
            break;
        
        default: printf("A semana tem 7 dias!");
            break;
    
    }
    return 0;
}