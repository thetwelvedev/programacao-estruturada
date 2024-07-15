//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
//Faça um programa que converta uma letra maiúscula em letra minúscula. Use a tabela ASCII para isso.

#include <stdio.h>

int main() {
    char a;
    
    printf("Digite uma letra de A a Z(Maiscula): ");
    scanf("%c", &a);// A = 65 em decimal

    a = a + 32;// Distância da maíuscula para minúscula(35 unidades)
    //Eu codifico o valor em decimal para na hora do código modificar a letra
    printf("%c", a);
    return 0;
}
//Tabela utilizada: https://www.techtudo.com.br/noticias/2022/10/o-que-e-o-codigo-ascii-confira-a-tabela-completa-e-para-que-serve.ghtml