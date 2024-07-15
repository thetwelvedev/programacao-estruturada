//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
//Elabore um programa que faça a leitura de vários números inteiros até que se digite um número negativo. O programa tem de retornar o maior e o menor número lido.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int menor ,maior ,num;
    
    printf("Digite um numero: ");
    scanf("%d",&num);
    fflush(stdin);
    
    menor = num;
    maior = num;

    for (;;){
        
        printf("Digite um numero: ");
        scanf("%d",&num);//Serve para parar quando for negativo
        
        if (num <= 0){
            break;
        }
        else if (num > maior){//Pegar o maior valor
            maior = num;
        }
        else if(num < menor){//Pegar o menor valor
            menor = num;
        }
        
    }
    
    printf("O menor = %d e o maior = %d", menor, maior);

    return 0;
}