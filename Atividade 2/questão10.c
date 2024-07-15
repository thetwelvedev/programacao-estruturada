//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
//A importância de R$ 780.000,00 será dividida entre três ganhadores de um concurso, sendo que:
//i. O primeiro ganhador receberá 46% do total.
//ii. O segundo receberá 32% do total.
//iii. O terceiro receberá o restante.
//Calcule e imprima a quantia recebida por cada um dos ganhadores.
#include <stdio.h>

int main() {
    double P, S, T;

    P = 780000 * 0.46;
    S = 780000 * 0.32;
    T = 780000 * 0.22;

    printf("O primeiro ganhou %.0f reais\nO segundo ganhou %.0f reais\nO terceiro ganhou %.0f reais", P, S, T);
    return 0;
}