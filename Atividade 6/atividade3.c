//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
//Crie uma estrutura para representar as coordenadas de um ponto no plano (posições X e Y). Em seguida, declare e leia do teclado dois pontos e exiba a distância entre eles.

#include<stdio.h>
#include<math.h>

int main()
{
    double distance, x2, y2;
    struct Coord
    {
        double x;
        double y;
    };

    struct Coord points;

    printf("Digite duas posicoes x e y (ex: 1 2)");
    scanf("%lf %lf", &points.x, &points.y);

    printf("Digite duas posicoes x2 e y2 (ex: 1 2)");
    scanf("%lf %lf", &x2, &y2);

    distance = sqrt(pow(points.x - x2, 2)+pow(points.y - y2, 2)); //formula distancia entre dois pontos

    printf("A distancia entre os pontos e: %.2lf",distance);
    


    return 0;
}