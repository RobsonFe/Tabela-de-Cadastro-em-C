#include <stdio.h>
#include <string.h>

// Projeto feito por Robson Ferreira

//Aluno: Robson Ferreira da Silva;
//Curso: Analise e Desenvolvimento de Sistemas;
//1º Periodo

void limpar_entrada()
{
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void ler_texto(char *buffer, int length)
{
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}

int main()
{

    int n;


    printf ("\t\tCadastro\n");

    printf("\n");

    printf ("Quantas pessoas serao cadastradas ? ");
    scanf("%d", &n);

    char nomes [n][50];
    int idades [n];
    char sexo[n];
    double salarios [n];


    for (int i = 0; i < n; i++)
    {
        printf ("Dados da %d pessoa:\n ", i + 1);
        printf ("Nome: ");
        limpar_entrada();
        ler_texto(nomes[i], 50);
        printf("Idade: ");
        scanf("%d", &idades[i]);
        printf("Sexo: ");
        scanf("%s", &sexo[i]);
        printf("Salario: ");
        scanf("%lf", &salarios[i]);
    }

    printf("\nPessoas Cadastradas\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d" [i]);
    }


    return 0;
}
