//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
//Faça um programa que leia os coeficientes de uma equação do segundo grau. Em seguida, calcule e mostre as raízes dessa equação, lembrando que as raízes são calculadas como x = -b+-Raiz de delta/2*a em em que Δ = b2 – 4 * a * c e ax2 + bx + c = 0 representa uma equação do segundo grau. A variável a tem de ser diferente de zero. Caso seja igual, imprima a mensagem “Não é equação de segundo grau”. Do contrário, imprima:
//• Se Δ < 0, não existe real. Imprima a mensagem “Não existe raiz”.
//• Se Δ = 0, existe uma raiz real. Imprima a raiz e a mensagem “Raiz única”.
//• Se Δ > 0, existem duas raízes reais. Imprima as raízes.

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, x1, x2, delta;
    
    printf("Digite os coeficientes a, b e c da sua funcao quadratica: ");
    scanf("%f%f%f", &a, &b, &c);

    if (a == 0){
        printf("Nao e funcao quadratica");
    }
    else if((a>0)||(a<0)){
        delta = pow(b,2) - 4*a*c;
        x1 = (-b + sqrt(delta))/2*a;
        x2 = (-b - sqrt(delta))/2*a;
        
        if(delta<0){
            printf("Nao existe raiz");
        }
        else if(delta==0){
            printf("Raiz unica onde x1 = %.2f e x2 = %.2f sao iguais", x1, x2);
        }
        else if(delta>0){
            printf("Tem duas raizes reais x1 = %.2f e x2 = %.2f", x1, x2);
        }
    }
    return 0;
}