#include <stdio.h>
#include <string.h>
#include <locale.h>

struct dados_pessoa
{

    int idade;
    float peso;
    char nome[300];
    float altura;
};

int main()
{

    struct dados_pessoa peso;

    printf("informacoes \n");
    printf("peso.nome %s \n", peso.nome);
    printf("peso.idade %d \n", peso.idade);
    printf("peso.peso %.2f \n", peso.peso);
    printf("peso.altura %.2f \n", peso.altura);

    printf("informe o nome \n");
    scanf("%s", &peso.nome);

    printf("infome a idade \n");
    scanf("%d", &peso.idade);

    printf("informe o peso \n");
    scanf("%.2f", &peso.peso);

    printf("informe a altura \n");
    scanf("%.2f", &peso.altura);

    return 0;
}
