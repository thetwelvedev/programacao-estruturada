//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
//Faça um programa para verificar se determinado número inteiro lido é divisível por 3 ou 5, mas não simultaneamente pelos dois.

#include <stdio.h>

int main() {
    int a;
    printf("Digite um numero inteiro: ");
    scanf("%d", &a);
    
    if((a%3 == 0)&&(a%5 == 0)){
        printf("%d e divisivel por 3 e 5!", a);//Vai analisar primeiro o if pois colocasse o if no divisil por 3 ou 5, ia dar que o numero só é divísivel por um
    }
    else if(a%3 == 0){
        printf("%d e divisivel por 3!", a);
    }
    else if(a%5 == 0){
        printf("%d e divisivel por 5!", a);
    }
    else{
        printf("%d nao e divisivel por 3 e nem 5!", a);
    }
    return 0;
}