//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
//Crie uma união contendo dois tipos básicos diferentes. Agora, escreva um programa que inicialize um dos tipos dessa união e exiba em tela o valor do outro tipo

#include<stdio.h>
#include<stdlib.h>

union tipo
{
    short int x;
    unsigned char c;
};


int main()
{
    union tipo t;

    t.x = 1545;
    
    printf("%d\n",t.x);
    printf("%d\n",t.c);
    printf("%c\n",t.x);
    printf("%c",t.c);

    return 0;
}