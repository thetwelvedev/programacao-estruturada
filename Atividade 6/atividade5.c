//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
//Usando a estrutura Retângulo do exercício anterior, faça um programa que declare e leia uma estrutura Retângulo e um Ponto, e informe se esse ponto está ou não dentro do retângulo.

#include <stdio.h>


typedef struct point
{
    float x;
    float y;
} point;

typedef struct rectangle
{
    point up_left;
    point down_right;
} rectangle;

int main()
{ 
    float point[2];
    rectangle rectangle;

    printf("Digite o ponto superior esquerdo do retangulo (X Y): ");
    scanf("%f %f", &rectangle.up_left.x, &rectangle.up_left.y);

    printf("Digite o ponto inferior direito do retangulo (X Y): ");
    scanf("%f %f", &rectangle.down_right.x, &rectangle.down_right.y);
    
    printf("Digite o ponto (X Y): ");
    scanf("%f %f",&point[0],&point[1]);

    if ((point[0] > rectangle.down_right.x && point [0] < rectangle.up_left.x) && (point[1] > rectangle.down_right.y && point[1] < rectangle.up_left.y))
    {
        printf("O ponto se encontra dentro do retangulo");
    }
    else
    {
        printf("O ponto se encontra na linha ou fora do triangulo");
    }
    return 0;
}