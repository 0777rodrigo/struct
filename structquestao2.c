#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct informacoes_pessoa
{

    char nome[300];
    int idade[5];
    float peso[5];
    float altura[5];
};

int main()
{
    int i;
    struct informacoes_pessoa peso;

    printf("informacoes \n");
    printf("peso.nome %s \n", peso.nome);
    printf("peso.idade %s \n", peso.idade);
    printf("peso.peso %.2f \n", peso.peso);
    printf("peso.altura %.2f \n", peso.altura);

    for (i = 0; i < 5; i++)
    {

        printf("informe a nome \n", i + 1);
        scanf("%s", &peso.nome[i]);

        printf("Informe a idade \n", i + 1);
        scanf("%d", &peso.idade[i]);

        printf("infome o peso \n", i + 1);
        scanf("%.2f", &peso.peso[i]);

        printf("informe a altura \n", i + 1);
        scanf("%.2f", &peso.altura[i]);
    }

    return 0;
}