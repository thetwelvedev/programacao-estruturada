//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
//Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso ideal, utilizando as seguintes fórmulas (em que “h” corresponde à altura):
//• Homens: (72,7 * h) – 58
//• Mulheres: (62,1 * h) – 44,7

#include <stdio.h>

int main() {
    float h, peso;
    char sexo;

    printf("Qual sua altura? ");
    scanf("%f", &h);
    fflush(stdin);
    printf("Qual seu sexo?\n[M]Masculino\n[F]Feminino\n");
    scanf("%c", &sexo);
    
    if(sexo == 'M'){
        peso = (72.7*h)-58;
        printf("Seu peso ideal e %.2fkg", peso);
    }
    else if(sexo == 'F'){
        peso = (62.1*h)-44,7;
        printf("Seu peso ideal e %.2fkg", peso);
    }
    return 0;
}