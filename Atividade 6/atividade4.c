//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
// Crie uma estrutura chamada Retângulo. Essa estrutura deverá conter o ponto superior esquerdo e o ponto inferior direito do retângulo. Cada ponto é definido por uma estrutura Ponto, a qual contém as posições X e Y. Faça um programa que declare e leia uma estrutura Retângulo e exiba a área e o comprimento da diagonal e o perímetro desse retângulo.

#include <stdio.h>
#include <math.h>

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
    float area, diagonal, perimeter; 

    rectangle rectangle;

    printf("Digite o ponto superior esquerdo (X Y): ");
    scanf("%f %f", &rectangle.up_left.x, &rectangle.up_left.y);

    printf("Digite o ponto inferior direito (X Y): ");
    scanf("%f %f", &rectangle.down_right.x, &rectangle.down_right.y);

    area = (rectangle.up_left.x - rectangle.down_right.x) * (rectangle.up_left.y - rectangle.down_right.y);
    perimeter = 2*(rectangle.up_left.x - rectangle.down_right.x + rectangle.up_left.y - rectangle.down_right.y);
    diagonal = sqrt(pow(rectangle.up_left.x - rectangle.down_right.x, 2) + pow(rectangle.up_left.y - rectangle.down_right.y, 2));

    printf("A area desse retangulo: %.2f, perimetro: %.2f e diagonal: %.2f\n", area, perimeter, diagonal);

    return 0;
}