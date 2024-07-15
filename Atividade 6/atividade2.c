//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
//Crie uma estrutura para representar as coordenadas de um ponto no plano (posições X e Y). Em seguida, declare e leia do teclado um ponto e exiba a distância dele até a origem das coordenadas, isto é, a posição (0,0).

#include<stdio.h>
#include<math.h>

int main()
{
    double distance;
    struct Coord
    {
        double x;
        double y;
    };
    
    struct Coord points;

    printf("Digite duas posicoes x e y (ex: 1 2)");
    scanf("%lf %lf", &points.x, &points.y);

    distance = sqrt(pow(points.x, 2)+pow(points.y, 2)); //formula distancia entre dois pontos

    printf("A distancia entre os pontos e: %.2lf", distance);
    

    return 0;
}