#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

void main()
{

    int resposta, quantidade;
    float valor = 0.00;

    do
    {

        printf("100 cachorro quente: R$ 1.70 \n");
        printf("101 bauru simples: R$ 2.30 \n");
        printf("102 bauru com ovo: R$ 2.60 \n");
        printf("103 hamburguer: R$ 2.40 \n");
        printf("104 cheeseburguer: R$ 2.50 \n");
        printf("105 refrigerante: R$ 1.00 \n");

        scanf("%d", &resposta);

        printf("diga a quantidade \n");
        scanf("%d", &quantidade);

        switch (resposta)
        {
        case 100:
            valor = quantidade * 1.70;
            printf("valor a pagar %.2f \n ", valor);
            break;
        case 101:
            valor = quantidade * 2.30;
            printf("valor a pagar %.2f \n ", valor);
            break;
        case 102:
            valor = quantidade * 2.60;
            printf("valor a pagar %.2f \n", valor);
            break;
        case 103:
            valor = quantidade * 2.40;
            printf("valor a pagar %.2f \n", valor);
            break;
        case 104:
            valor = quantidade * 2.50;
            printf("valor a pagar %.2f \n", valor);
            break;
        case 105:
            valor = quantidade * 1.00;
            printf("valor a pagar %.2f \n", valor);
            break;

        default:
            printf("numero invalido \n");
            break;
        }

    } while (resposta = 0);
}