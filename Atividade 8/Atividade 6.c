//Nome: Leonardo Vinícius Lima Castro Matricula: 2022009946
//Faça um programa que leia um arquivo texto contendo uma lista de compras. Cada linha do arquivo possui nome, quantidade e valor unitário do produto. O programa então exibe o total da compra.

#include<stdio.h>

int main()
{
    FILE *fp;
    char nome_arquivo[FILENAME_MAX];
    char nome_produto[100];
    int quantidade;
    float valor_unitario;
    float total = 0.0;

    printf("Digite o nome do arquivo: ");
    scanf("%s", nome_arquivo);

    fp = fopen(nome_arquivo, "r");
    if (fp == NULL) { 
        perror("fopen");
        return 1;
    }

    while (fscanf(fp, "%s %d %f", nome_produto, &quantidade, &valor_unitario) != EOF) {


        float subtotal = quantidade * valor_unitario; 
        total += subtotal; 
    }

    fclose(fp); 

    printf("O total da compra é: R$%.2f\n", total); 

    return 0;
}