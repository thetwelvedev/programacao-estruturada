//Nome: Leonardo Vinícius Lima Castro Matricula: 2022009946
//Escreva um programa que leia do usuário o nome de um arquivo texto. Em seguida, mostre na tela quantas linhas esse arquivo possui.

#include <stdio.h>
#define MAX 100 

int main(){
 FILE *fp;
 char nome[FILENAME_MAX]; 
 
 int quantidade = 1;
 printf("Digite o nome do arquivo: ");
 scanf("%s", nome); 

 fp = fopen(nome, "r"); 
 if (fp == NULL) { 
   perror("fopen");
   return 1; 
 }

 char linha[MAX];

 while (fgets(linha, MAX, fp) != NULL) { 
   if (!feof(fp)) { 
     quantidade++; 
   }
 }
 

 fclose(fp); 
 printf("%d\n",quantidade); 
 return 0;
}