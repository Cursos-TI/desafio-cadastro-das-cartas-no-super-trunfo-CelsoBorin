#include <stdio.h>


int main()
{
    char estado1[10], estado2[10];
    char cod_carta1[10], cod_carta2[10];
    char nome_cidade1[20], nome_cidade2[20];
    int populacao1, populacao2;
    int pontos_turisticos1, pontos_turisticos2;
    float area1, area2;
    float pib1, pib2;

            //NESSE BLOCO SERA INFORMADO AS INFORMACOES REFERENTE A CARTA 1
            printf("\nDADOS CARTA 1:\n");
            printf("Informe uma letra entre 'A' e 'H':\n");
            scanf("%s",&estado1);

            printf("Informe o codigo da carta, com a letra do ESTADO seguido de um numero entre '01' a '04':\n");
            scanf("%s",&cod_carta1);

            printf("Informe o nome da cidade:\n");
            scanf("%s",&nome_cidade1);

            printf("Informe a populacao:\n");
            scanf("%d",&populacao1);

            printf("Informe a area:\n");
            scanf("%f",&area1);

            printf("Informe o PIB:\n");
            scanf("%f",&pib1);

            printf("Informe o numero de pontos turisticos:\n");
            scanf("%d",&pontos_turisticos1);

            //NESSE BLOCO SERA INFORMADO AS INFORMACOES REFERENTE A CARTA 2
            printf("\nDADOS CARTA 2:\n");
            printf("Informe uma letra entre 'A' e 'H':\n");
            scanf("%s",&estado2);

            printf("Informe o codigo da carta, com a letra do ESTADO seguido de um numero entre '01' a '04':\n");
            scanf("%s",&cod_carta2);

            printf("Informe o nome da cidade:\n");
            scanf("%s",&nome_cidade2);

            printf("Informe a populacao:\n");
            scanf("%d",&populacao2);

            printf("Informe a area:\n");
            scanf("%f",&area2);

            printf("Informe o PIB:\n");
            scanf("%f",&pib2);

            printf("Informe o numero de pontos turisticos:\n");
            scanf("%d",&pontos_turisticos2);

                //IMPRIME EM TELA OS DADOS COLETADOS REFERENTE A CARTA1
                printf("\nCARTA 1:\n");
                printf("Estado: %s\n",estado1);
                printf("Codigo: %s\n",cod_carta1);
                printf("Nome da Cidade: %s\n",nome_cidade1);
                printf("Populacao: %d\n",populacao1);
                printf("Area: %.2f km\n",area1);//O CAMPO AREA TERA DUAS CASAS DECIMAL
                printf("PIB: %.2f bilhoes de reais\n",pib1);
                printf("Numero de pontos turisticos: %d\n",pontos_turisticos1);

                //IMPRIME EM TELA OS DADOS COLETADOS REFERENTE A CARTA2
                printf("\nCARTA 2:\n");
                printf("Estado: %s\n",estado2);
                printf("Codigo: %s\n",cod_carta2);
                printf("Nome da Cidade: %s\n",nome_cidade2);
                printf("Populacao: %d\n",populacao2);
                printf("Area: %.2f km\n",area2);
                printf("PIB: %.2f bilhoes de reais\n",pib2);
                printf("Numero de pontos turisticos: %d\n",pontos_turisticos2);



    return 0;
}

