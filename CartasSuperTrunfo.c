#include <stdio.h>
#include <string.h>

int main() {

    char estado,estado1;                                    // Letra de 'A' a 'H'
    char codigoCarta[4],codigoCarta1[4];                   // Ex: A01, B03
    char nomeCidade[50],nomeCidade1[50];                  // Nome da cidade
    int populacao,populacao1;                            // Número de habitantes
    float area,area1;                                   // Área em km²
    float pib,pib1;                                    // Produto Interno Bruto
    int pontosTuristicos,pontosTuristicos1;           // Número de pontos turísticos
    float densidade,densidade1;                      //Densidade Populacional habitantes por km²
    float pibPerCapita,pibPerCapita1;               //Produto Interno Bruto pela Populacao




    printf("\n--- Inserindo dados da Carta 01 ---\n");

    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado);

    printf("Código da Carta DE 01 A 04 (ex: A01): ");
    scanf("%s", codigoCarta);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]",nomeCidade); // Lê string com espaços

    printf("População: ");
    scanf("%d", &populacao);

    printf("Área (em km²): ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &pib);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos);
    
    
    
    printf("\n--- Inserindo dados da Carta 02 ---\n");

    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado1);

    printf("Código da Carta DE 01 A 04 (ex: A01): ");
    scanf("%s", codigoCarta1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]",nomeCidade1); // Lê string com espaços

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);
    
    densidade = populacao / area;
    densidade1 = populacao1 / area1;
    
    pibPerCapita = pib / populacao;
    pibPerCapita1 = pib1 / populacao1;


    printf("\nCarta 01\n");
    printf("Estado: %c\n", estado);
    printf("Código da Carta: %s\n", codigoCarta);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f bilhões\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade);
    printf("PIB per Capita: R$ %.2f reais\n", pibPerCapita);
    
    
    
    printf("\nCarta 02\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bilhões\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: R$ %.2f reais\n", pibPerCapita1);



    return 0;
}
