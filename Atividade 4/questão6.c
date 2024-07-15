//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
//Faça um programa que mostre uma contagem regressiva na tela, iniciando em 10 e terminando em 0. Mostre uma mensagem “FIM!” após a contagem.

#include <stdio.h>

int main() {

    int num = 10;

    for (int i = num; i >= 0; i--)// Vai de 10 a 0, pois cada loop subtrai 1.
    {
        printf("%d\n",i);
    }
    printf("Fim");
    
    return 0;
}