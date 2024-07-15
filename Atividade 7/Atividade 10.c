//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
// 10.Escreva uma função que receba dois valores numéricos e um símbolo. Esse símbolo representará a operação que se deseja efetuar com os números. Assim, se o símbolo for “ + ”, deverá ser realizada uma adição, se for “ − ”, uma subtração, se for “/”, uma divisão, e, se for “*”, será efetuada uma multiplicação. Retorne o resultado da operação para o programa principal

#include <stdio.h>
#include <string.h> 
#include <ctype.h>
#include <math.h> 

double Somar(double a, double b)
{
    double r;
    r = a + b;
    return(r);
}

double Subtrair(double a, double b)
{
    double r;
    r = a - b;
    return(r);
}

double Multiplicar(double a, double b)
{
    double r;
    r = a * b;
    return(r);
}

double Dividir(double a, double b)
{
    double r;
    r = a / b;
    return(r);
}

double Potencia(double a, double b)
{
    double r;
    r = pow(a, b);
    return(r);
}

double raiz(double a, double b)
{
    double r;
    r = pow(a, 1/b);
    return(r);
}

int main(void)
{
    double v1, v2;  
    char sinal[2], desbug[100], sim_or_nao = 'n';
    
    while (sim_or_nao != 's')
    {
        printf("Digite dois valores separados por espaco e no meio o sinal da equacao (ex: 1 + 1)\n'+' para soma\n'-' para subtracao\n'*' para multiplicacao\n'/' para divisao\n'**' para potencia\n'//=' para raiz\nDigite aqui: ");
        
        fgets(desbug, 100, stdin); 
        sscanf(desbug, "%lf %s %lf", &v1, sinal, &v2); 

        if ((strcmp(sinal,"/") == 0) && v2 == 0) 
        {
            printf("Nao existe divisao por 0\n");
        }
    
        else if (strcmp(sinal, "/")==0)
        {
            printf("%5.2lf / %5.2lf = %5.2lf\n",v1, v2, Dividir(v1, v2)); 
        }
        else if (strcmp(sinal, "-")==0)
        {
            printf("%5.2lf - %5.2lf = %5.2lf\n",v1, v2, Subtrair(v1, v2));
        }
        else if (strcmp(sinal, "+")==0)
        {
            printf("%5.2lf + %5.2lf = %5.2lf\n",v1, v2, Somar(v1, v2));        
        }
        else if (strcmp(sinal, "*")==0)
        {
            printf("%5.2lf x %5.2lf = %5.2lf\n",v1, v2, Multiplicar(v1, v2));
        }
        else if (strcmp(sinal,"**") == 0)
        {
            printf("%5.2lf ** %5.2lf = %5.2lf\n",v1, v2, Potencia(v1, v2)); 
        }
        else if (strcmp(sinal,"//") == 0)
        {
            printf("%5.2lf // %5.2lf = %5.2lf\n",v1, v2, raiz(v1, v2)); 
        }
        else 
        {
            printf("Voce digitou alguma coisa errada.\n"); 
        }

        printf("Digite s para sair: ");
    
        fflush(stdin);

        scanf("%c",&sim_or_nao);
        sim_or_nao = tolower(sim_or_nao);
        
        fflush(stdin);
    }
    return 0;
}