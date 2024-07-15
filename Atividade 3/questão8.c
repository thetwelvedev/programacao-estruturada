//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
//Escreva um programa que, dada a idade de um nadador, classifique-o em uma das seguintes categorias:

#include <stdio.h>

int main() {
    int idade;
    printf("Qual a sua idade nadador? ");
    scanf("%d", &idade);

    if((idade >= 5)&&(idade <= 7)){
        printf("Sua categoria: Infantil A");
    }
    else if((idade >= 8)&&(idade <= 10)){
        printf("Sua categoria: Infantil B");
    }
    else if((idade >= 11)&&(idade <= 13)){
        printf("Sua categoria: Juvenil A");
    }
    else if((idade >= 14)&&(idade <= 17)){
        printf("Sua categoria: Juvenil B");
    }
    else if(idade >= 18){
        printf("Sua categoria: Senior");
    }
    else{
        printf("Muito novo");
    }
    return 0;
}