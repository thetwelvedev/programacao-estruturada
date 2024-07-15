//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
// 2.Faça uma função que receba um número inteiro de 1 a 12 e imprima em tela o mês e a sua quantidade de dias de acordo com o número digitado pelo usuário. Exemplo: Entrada = 4. Saída = abril.

#include <stdio.h>

const char* monthf[13] =
    { "0","Janeiro", "Fevereiro", "Marco", "Abril",
        "Maio", "Junho", "Julho", "Agosto",
        "Setembro", "Outubro", "Novembro", "Dezembro"};

void Mes(int month)
{
    printf("O mes digitado e: %s",monthf[month]);
}

int main()
{
    int n1;
    printf("Digite um numero de 1 a 12: ");
    scanf("%d",&n1);
    if (n1>0 && n1<13)
    {
        Mes(n1);
    }
    else{printf("NUmero invalido");}
    
    return 0;
}