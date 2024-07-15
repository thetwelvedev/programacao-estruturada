//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
//Leia uma matriz de tamanho 3 × 3. Em seguida, imprima a soma dos valores contidos em sua diagonal principal.

#include<stdio.h>

int main()
{
    double matriz[3][3], soma = 0;
 

    //For para a leitura dos valores
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%lf",&matriz[i][j]);
            if (i==j)
            {
                soma += matriz[i][j];
            }
            
            
        }
        
    }
    
    printf("A soma e: %.2lf",soma);
    return 0;
}