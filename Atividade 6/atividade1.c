//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
//Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e armazene esses dados em uma estrutura. Em seguida, imprima na tela os dados da estrutura lida.

#include<stdio.h>

int main()
{
    struct Dados
    {
        char name[40];
        int age;
        char ender[20];
    };
    
    struct Dados people;
    
    printf("Digite o seu nome: ");
    fgets(people.name, 40, stdin);

    printf("Digite a sua idade: ");
    scanf("%d", &people.age);
    fflush(stdin);
    printf("Digite o seu Endereco: ");
    fgets(people.ender, 40, stdin);

    printf("Os dados digitados foram: \nNome: %sIdade: %d\nEndereco: %s", people.name, people.age, people.ender);

    return 0;
}