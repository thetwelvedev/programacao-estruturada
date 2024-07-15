//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
//Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
//• O número digitado ao quadrado.
//• A raiz quadrada do número digitado.

#include <stdio.h>
#include <math.h>

int main() {
    float a, quadrado, raizq;

    printf("Digite um numero: ");
    scanf("%f", &a);

    if(a >= 0){
        quadrado = pow(a,2);
        raizq = sqrt(a);
        printf("O numero ao quadrado de %.2f e %.2f\nA raiz quadrada de %.2f e %.2f", a, quadrado, a, raizq);
    }
    else{
        printf("Numero e negativo");
    }
    return 0;
}