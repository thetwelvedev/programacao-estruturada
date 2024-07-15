//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
// 9.Elabore uma função que receba três notas de um aluno como parâmetros e uma letra. Se a letra for “A”, a função deverá calcular a média aritmética das notas do aluno; se for “P”, deverá calcular a média ponderada, com pesos 5, 3 e 2. Retorne a média calculada para o programa principal.

#include <stdio.h>
#include <ctype.h>

float Media(float n1,float n2,float n3)
{
    char letra;
    
    printf("Digite a letra A ou P: ");
    scanf(" %c", &letra);
    
    letra = toupper(letra);
    
    if (letra == 'A')
    {
        return (n1 + n2 + n3)/3;
    }
    else if (letra == 'P')
    {
        return (n1*5 + n2*3 + n3*2)/10;
    }
}

int main()
{
    float n1, n2, n3, media;

    printf("Digite as 3 notas(ex.: 10 10 10): ");
    scanf("%f %f %f",&n1, &n2, &n3);

    media = Media(n1, n2, n3);

    printf("A media ficou: %.2f", media);

    return 0;
}