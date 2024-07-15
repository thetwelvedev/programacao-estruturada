//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
// 11.Escreva uma função que receba por parâmetros dois valores inteiros x e y e calcule e retorne o resultado de xy para o programa principal. Não use nenhuma função pronta para isso

#include <stdio.h>

float potencia(float n, int y)
{
    int r = 1;
    if (y < 0){
        y *= -1;
    } 
    for (int i = 0; i < y; i++){
        r = r * n;   
    }
    
    return r;
}

int main()
{
    float x, resultado;
    int y;
    
    printf("Digite o valor e o expoente(ex.: 10 2): ");
    scanf("%f %d", &x, &y);

    resultado = potencia(x, y);

    if (y < 0){
        printf("O resultado e: 1/%.2f", resultado);        
    }
    else{
        printf("O resultado e: %.2f", resultado);
    }
    return 0;
}