//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
//Escreva um programa que leia o nome e o valor de determinada mercadoria de uma loja. Sabendo que o desconto para pagamento à vista é de 10% sobre o valor total, calcule o valor a ser pago à vista. Escreva o nome da mercadoria, o valor total, o valor do desconto e o valor a ser pago à vista.*/

#include <stdio.h>
#include <string.h>

int main() {
    char productName[50];
    float productPrice;

    printf("Digite o nome do produto: ");
    fgets(productName, sizeof(productName), stdin);

    productName[strlen(productName) - 1] = '\0';

    printf("Digite seu preco: ");
    scanf("%f", &productPrice);

    float discount = 10.0 / 100 * productPrice;
    float discountedPrice = productPrice - discount;

    printf("Nome do produt0: %s\n", productName);
    printf("Preco: R$%.2f\n", productPrice);
    printf("Desconto: R$%.2f\n", discount);
    printf("Novo preco(com desconto): R$%.2f\n", discountedPrice);

    return 0;
}