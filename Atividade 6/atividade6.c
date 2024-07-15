//Nome: Leonardo Vinícius Lima Castro Matrícula: 2022009946
//Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura deve conter o número de matrícula do aluno, seu nome e as notas de três provas. Agora, escreva um programa que leia os dados de cinco alunos e os armazene nessa estrutura. Em seguida, exiba o nome e as notas do aluno que possui a maior média geral dentre os cinco.

#include<stdio.h>

int main()
{
    float averages[5],average;
    int student;

    struct students
    {
        int registration[5];
        char name[5][40];
        float grades[5][3];
    };
    
    struct students students;

    for (int i = 0; i < 5; i++)
    {
        printf("Digite sua matricula: ");
        scanf("%d",&students.registration[i]);

        printf("Digite seu nome: ");
        scanf("%s",students.name[i]);

        printf("Digite suas tres notas(ex:7 7 7): ");
        scanf("%f %f %f",&students.grades[i][0],&students.grades[i][1],&students.grades[i][2]);
    }
       
    for (int i = 0; i < 5; i++)
    {
        averages[i] = (students.grades[i][0]+students.grades[i][1]+students.grades[i][2])/3;
        if (averages[i]>averages[i-1])
        {
            student = i;
            average = averages[i];
        }
    }
    
    printf("O aluno %s teve as notas %.2f %.2f %.2f e media %.2f", students.name[student], students.grades[student][0], students.grades[student][1], students.grades[student][2], average);

    return 0;
}