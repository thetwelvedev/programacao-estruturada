//Nome: Leonardo Vinícius Lima Castro Matricula: 2022009946
//Escreva um programa que leia do usuário os nomes de dois arquivos texto. Crie um terceiro arquivo texto com o conteúdo dos dois primeiros juntos (o conteúdo do primeiro seguido do conteúdo do segundo).

#include<stdio.h>

int main(){
    FILE *fp1;
    FILE *fp2;
    FILE *fp3;
    char nome1[FILENAME_MAX];
    char nome2[FILENAME_MAX];
    char nome3[FILENAME_MAX];

    printf("Digite o nome do primeiro arquivo: ");
    scanf("%s", nome1);

    printf("Digite o nome do segundo arquivo: ");
    scanf("%s", nome2);

    printf("Digite o nome do terceiro arquivo(vai ser criado): ");
    scanf("%s", nome3);



    fp1 = fopen(nome1, "r");
    fp2 = fopen(nome2, "r");
    fp3 = fopen(nome3, "a");

for (int i = 0; i < 2; i++)
{
    FILE *fp; 
    if (i == 0)
    { 
        fp = fp1; 
    }
    else 
    { 
        fp = fp2; 
    }
    
    char c = fgetc(fp); 
    while (c != EOF) 
    { 
        fputc(c, fp3); 
        c = fgetc(fp); 
    }
}
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    
    return 0;
}