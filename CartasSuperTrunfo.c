#include <stdio.h>

int main(){
    //Declaração de variáveis
    char estado1[50], estado2 [50];
    char codigo1[4], codigo2[4];
    char nomeCidade1[100], nomeCidade2[100];
    int populacao1, populacao2;
    float pib1, pib2;
    float area1, area2;
    int pontosTuristicos1, pontosTuristicos2;

    //Leitura dos dados da carta 01
    printf("Digite os dados da carta 01:/n");
    printf("Estado: ");
    scanf("%s", estado1);
    printf("Codigo: ");
    scanf("%s", codigo1);
    printf("Nome da cidade: ");
    scanf("%s", nomeCidade1);
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);
    printf("Area (em km): ");
    scanf("%f", &area1);
    printf("Pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    //Leitura dos dados da carta 02
    printf("Digite os dados da carta 02:/n");
    printf("Estado: ");
    scanf("%s", estado2);
    printf("Codigo: ");
    scanf("%s", codigo2);
    printf("Nome da cidade: ");
    scanf("%s", nomeCidade2);
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);
    printf("Area (em km): ");
    scanf("%f", &area2);
    printf("Pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    //Calculo da densidadde populacional e PIB per capita.
    float densidade1 = (float)populacao1 / area1;
    float densidade2 = (float)populacao2 / area2;
    float pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    float pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    //Exibição dos dados
    printf("/nDados da carta 01:/n");
    printf("Estado: %s/n", estado1);
    printf("Codigo: %s/n", codigo1);
    printf("Nome da cidade: %s/n", nomeCidade1);
    printf("Populacao: %d/n", populacao1);
    printf("PIB: %.2f bilhoes de reais/n", pib1);
    printf("Area: %.2f km/n", area1);
    printf("Pontos turisticos: %d/n", pontosTuristicos1);
    printf("Densidade populacional: %.2f hab/km/n", densidade1);
    printf("PIB per capita: %.2f reais/n", pibPerCapita1);

    printf("/nDados da carta 02:/n");
    printf("Estado: %s/n", estado2);
    printf("Codigo: %s/n", codigo2);
    printf("Nome da cidade: %s/n", nomeCidade2);
    printf("Populacao: %d/n", populacao2);
    printf("PIB: %.2f bilhoes de reais/n", pib2);
    printf("Area: %.2f km/n", area1);
    printf("Pontos turisticos: %d/n", pontosTuristicos2);
    printf("Densidade populacional: %.2f hab/km/n", densidade2);
    printf("PIB per capita: %.2f reais/n", pibPerCapita2);

    

    return 0;

       
}        
        








