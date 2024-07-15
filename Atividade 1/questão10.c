//Nome: Leonardo Vinícius Lima Castro Matrí­cula: 2022009946
//Elabore um programa que solicite ao usuário entrar com o valor do dia, mês e ano (inteiros). Em seguida, imprima os valores lidos separados por uma barra (\).

#include <stdio.h>

int main() {
    int dia;
    int mes;
    int ano;

    printf("Qual dia de hoje? ");//Coloquei um printf e scanf para cada váriavel pois vamos juntalas futuramente usando as / para ficar num formato de data
    scanf("%d", &dia);
    printf("qual mes estamos? ");
    scanf("%d", &mes);
    printf("Em que ano estamos? ");
    scanf("%d", &ano);

    printf("Data de hoje: %d/%d/%d", dia, mes, ano);//Como usamos as máscaras %d então preciso apenas colocalas no formato de data usando as /
    return 0;
}