//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
//Escreva uma função que receba por parâmetro uma temperatura em graus Fahrenheit e a retorne convertida em graus Celsius. A fórmula de conversão é: C = (F – *9/5)+ 32), sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.

#include <stdio.h>

void Conversao(float Fahrenheit)
{
    printf("A conversao fica: %.2f",(Fahrenheit*9.0/5.0)+ 32.0);//Alterei a formula do enunciado pois não dava o valor correto
}
int main()
{
    float n1;
    
    printf("Digite um valor para coverter: ");
    scanf("%f",&n1);

    Conversao(n1);
    return 0;
}