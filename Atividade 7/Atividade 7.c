//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
// 7.Elabore uma função que receba três números inteiros como parâmetro, representando horas, minutos e segundos. A função deve retornar esse horário convertido em segundos.

#include <stdio.h>

int Conversor(int h, int m, int s)
{
    return s + h * 3600 + m * 60;
}

int main()
{
    int horas, minutos, segundos, con;

    printf("Digite 3 valores horas, minutos e segundos (ex.: 2 36 56): ");
    scanf("%d %d %d", &horas, &minutos, &segundos);

    con = Conversor(horas, minutos, segundos);

    printf("O valor em segundos e: %d", con);

    return 0;
}