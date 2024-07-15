//Nome: Leonardo Vinícius Lima Castro Matricula: 2022009946
//Escreva um programa para converter o conteúdo de um arquivo texto em caracteres maiúsculos. O programa deverá ler do usuário o nome do arquivo a ser convertido e o nome do arquivo a ser salvo.

#include<stdio.h>
#include<ctype.h>

int main(){
    FILE *fp1;
    FILE *fp2;
    char nome1[FILENAME_MAX];
    char nome2[FILENAME_MAX];

    printf("Digite o nome do primeiro arquivo: ");
    scanf("%s", nome1);

    printf("Digite o nome do segundo arquivo: ");
    scanf("%s", nome2);

    fp1 = fopen(nome1, "r");
    fp2 = fopen(nome2, "w");

    FILE *fp; 

   char c = fgetc(fp1); 
    c = toupper(c); 
    while (c != EOF) 
    { 
        fputc(c, fp2); 
        c = fgetc(fp1); 
        c = toupper(c);
    }

    fclose(fp1); 
    fclose(fp2); 

    return 0;

}