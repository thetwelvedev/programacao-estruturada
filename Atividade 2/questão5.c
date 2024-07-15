//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
//Faça um programa que calcule o ano de nascimento de uma pessoa a partir de sua idade e do ano atual.

#include <stdio.h>

int main() {
    int idade, ano, nasc;
    char a; // Tive que criar pois se a pessoa ter feito ou não aniversário no ano influência na resposta
    
    printf("Qual a sua idade? ");
    scanf("%d", &idade);
    fflush(stdin);// Isso resolve o problema de buffer de armazenamento do scanf()
    printf("Em que ano estamos? ");
    scanf("%d", &ano);
    fflush(stdin);
    printf("Voce ja fez aniversario(S/N): ");
    scanf("%c", &a);
    //Quando for usar uma variável do char e usar if ou else if tem que colocar aspas simples Ex.: if(a == 'a'){}
    if(a == 'S'){//Perguntei se já fez aniversário pois se ja fez é só subtrair o ano - idade
        nasc = ano - idade;
        printf("Voce nasceu em %d\n", nasc);
    }
    else{//Se não fez aniversário ainda precisa subtrair ano - idade - 1
        nasc = ano - idade - 1;
        printf("Voce nasceu em %d", nasc);
    }
    return 0;
}