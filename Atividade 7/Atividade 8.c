//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
// 8.Elabore uma função para verificar se um número é um quadrado perfeito. Um quadrado perfeito é um número inteiro não negativo que pode ser expresso como o quadrado de outro número inteiro. Exemplos: 1, 4, 9

#include <stdio.h>
#include <math.h>

int quadrado(int val) 
{
    int none = 0; 
    none = val == 1 ? 1: none;
    
    if (val > 0)
    {
        for (int i = 1; i < val; i++) 
        {
            if (val == pow(i,2))
            {
                none = i; 
            }
        }
    }
    return none; 
    
}

int main()
{
    int n, resultado; 
    printf("Digite um valor: ");
    scanf("%d", &n);

    resultado = quadrado(n); 
    if (resultado != 0)
    {

        printf("O quadrado e %d",resultado);
    }
    else{
        printf("Nao tem quadrado perfeito");
    }
    
    return 0;
}