//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
// 1.Escreva uma função que receba por parâmetro dois números e retorne o maior deles.

#include <stdio.h>

float Maior(float n1,float n2) //Recebe dois valores
{
    
    if (n2 > n1) //Compara os dois
    {
        n1 = n2; //Igualar num1 a num2 se num2 for maior
    }
    return n1; //Retorna o num1
}
int main()
{
    float num1,num2;

    printf("Digite dois valores: ");
    scanf("%f %f", &num1, &num2);

    printf("O maior valor e: %.2f",Maior(num1,num2));

    return 0;
}