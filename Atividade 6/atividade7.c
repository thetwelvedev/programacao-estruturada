//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
//Crie uma estrutura representando uma hora. Essa estrutura deve conter os campos hora, minuto e segundo. Agora, escreva um programa que leia um vetor de cinco posições dessa estrutura e imprima a maior hora.

#include <stdio.h>

struct hours
{
    int hour, minutes, seconds, compare;
};

int main()
{
    int convert, hour, minute, second;
    struct hours hours[5];

    printf("Digite as horas (hora:minuto:segundo):\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d:%d:%d", &hours[i].hour, &hours[i].minutes, &hours[i].seconds);
        hours[i].compare = hours[i].hour * 3600 + hours[i].minutes * 60 + hours[i].seconds; //transforma tudo em segundos para comparar

        if (i == 0 || hours[i].compare > convert)
        {
            convert = hours[i].compare;
        }
    }

    //transforma para a contagem de horas e minutos certa.
    hour = convert / 3600;
    minute = (convert % 3600) / 60;
    second = convert % 60;

    printf("A maior hora foi: %02d:%02d:%02d\n", hour, minute, second);
}