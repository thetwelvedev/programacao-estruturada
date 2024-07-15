//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
//Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado possui uma taxa diferente de imposto sobre o produto. Faça um programa em que o usuário entre com o valor e o estado de destino do produto e o programa retorne o preço final do produto acrescido do imposto do estado em que ele será vendido. Se o estado digitado não for válido, mostrará uma mensagem de erro.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char estado[2];
    float valor, newvalor;
    
    printf("Digite a sigla do seu estado[Ex.: MG para Minas Gerais]: ");
    scanf("%s", estado);
    fflush(stdin);
    printf("Valor do produto: ");
    scanf("%f", &valor);
    
    estado[0] = toupper(estado[0]);
    estado[1] = toupper(estado[1]);
    
    if (strcmp(estado,"MG") == 0){
        newvalor = valor + (valor * 0.07);
        printf("Preco final: %.2f", newvalor);}
    else if (strcmp(estado,"SP")==0){
        newvalor = valor + (valor * 0.12);
        printf("Preco final: %.2f", newvalor);}
    else if (strcmp(estado,"RJ")==0){
        newvalor = valor + (valor * 0.15);
        printf("Preco final: %.2f", newvalor);}
    else if (strcmp(estado,"MS")==0){
        newvalor = valor + (valor * 0.08);
        printf("Preco final: %.2f", newvalor);}
    else {
        printf("Error");}
    return 0;
}