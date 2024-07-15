//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
//Faça um programa que calcule e escreva o valor de S:


#include<stdio.h>

int main(){
    float s = 1, val = 1;
    int i, razao = 2;
    
    for (i = 2; i < 56; i++) //Tem que ser do tamanho do divisor
    {
        val += razao; 
        //A cada loop soma ao valor a razão
        s += val / i; 
        //Soma todas os val
    }
    printf("s: %.2f", s); 
    
    return 0;
}