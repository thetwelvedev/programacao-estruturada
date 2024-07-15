//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
//Escreva um programa que leia 10 números e escreva o menor valor lido e o maior valor lido.

#include <stdio.h>

int main() {
    float valor, maior, menor;

    printf("Digite um valor: ");
    scanf("%f", &valor);

    menor = valor;
    maior = valor;
    // como maior e menor não tem valor ainda ele recebe de valor que recebe os valores do usuario
    
    for (int i = 0; i < 9; i++){//Já que tem um fora do loop vão ser só 9
        printf("Digite um valor: ");
        scanf("%f", &valor);
        fflush(stdin);
        
        if(valor < menor){
            menor = valor;// Caso o valor seja menor que o guardado ele substitui
        }
        
        else if(valor > maior){
            maior = valor;// Caso o valor seja maior que o guardado ele substitui
        }

    }
    printf("menor = %.2f e maior = %.2f", menor, maior);
    
    return 0;
}