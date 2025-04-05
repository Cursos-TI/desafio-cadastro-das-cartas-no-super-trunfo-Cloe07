#include <stdio.h>

int main(){
    printf("Desafio cadastro das cartas!/n");

    char estado01[50], estado02[50];
    char codigo01[4], codigo02[4];
    char nomeCidade01[100], nomeCidade02[100];
    int populacao01, populacao02;
    float pib01, pib02;
    float area01, area02;
    int pontosTuristicos01, pontosTuristicos02;

    //Leitura dos dados da carta01
    printf("Digite os dados da carta01:/n");

    printf("Estado: ");
    scanf("%s", estado01);

    printf("Código: ");
    scanf("%s", codigo01);

    printf("Nome da cidade: ");
    scanf("%s", nomeCidade01);

    printf("Populacao: ");
    scanf("%d", &populacao01);

    printf("PIB: ");
    scanf("%f", &pib01);

    printf("Área: ");
    scanf("%f", &area01);

    printf("Pontos turisticos: ");
    scanf("%d", &pontosTuristicos01);

    //Leitura dos dados da carta02
    printf("/nDigite os dados da carta 02:/n");

    printf("Estado: ");
    scanf("%s", estado02);

    printf("Código: ");
    scanf("%s", codigo02);

    printf("Nome da cidade: ");
    scanf("%s", nomeCidade02);

    printf("Populacao: ");
    scanf("%d", &populacao02);

    printf("PIB: ");
    scanf("%f", &pib02);

    printf("Área: ");
    scanf("%f", &area02);

    printf("Pontos turisticos: ");
    scanf("%d", &pontosTuristicos02);

    //Exibição de dados.
    printf("/nDados da 01:/n");
    printf("Estado: %sn", estado01);
    printf("Código: %s/n", codigo01);
    printf("Nome da cidade: %s/n", nomeCidade01);
    printf("Populacao: %d/n", populacao01);
    printf("PIB: %.2f/n", pib01);
    printf("Área: %.2f/n", area01);
    printf("Pontos turisticos: %d/n", pontosTuristicos01);

    printf("/nDados da carta 02:/n");
    printf("Estado: %s/n", estado02);
    printf("Código: %s/n", codigo02);
    printf("Nome da cidade: %s/n", nomeCidade02);
    printf("Populacao: %d/n", populacao02);
    printf("PIB: %.2f/n", pib02);
    printf("Área: %.2f/n", area02);
    printf("Pontos turisticos: %d/n", pontosTuristicos02);

    return 0;

       
}        
        








