#include <stdio.h>

int main(){
  
    //Declaração de variáveis
    
    char estado1[50], estado2[50];
    char codigo1[50], codigo2[50];
    char nome_cidade1[50], nome_cidade2[50];
    int populacao1, populacao2;
    float pib1, pib2;
    float area1, area2;
    int pontos_turisticos1, pontos_turisticos2;

    // Entrada de dados da carta 1
    printf("Digite os dados da carta 1:\n");
    printf("Código: "); 
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
     scanf("%s", nome_cidade1);

    printf("Estado: "); 
    scanf("%s", estado1);

    printf("População: "); 
    scanf("%d", &populacao1);

    printf("Área: "); 
    scanf("%f", &area1);

    printf("PIB: "); 
    scanf("%f", &pib1);

    printf("Pontos turísticos: "); 
    scanf("%d", &pontos_turisticos1);

    // Entrada de dados da carta 2
    printf("Digite os dados da carta 2:\n");

    printf("Código:\n"); 
    scanf("%s", codigo2);

    printf("Nome da cidade:\n"); 
    scanf("%s", nome_cidade2);

    printf("Estado:\n");
     scanf("%s", estado2);

    printf("População:\n"); 
    scanf("%d", &populacao2);

    printf("Área:\n");
    scanf("%f", &area2);

    printf("PIB:\n"); 
    scanf("%f", &pib2);

    printf("Pontos turísticos:\n");
    scanf("%d", &pontos_turisticos2);

    // Cálculos
    float densidade_populacional1 = (float)populacao1 / area1;
    float pib_per_capita1 = pib1 / populacao1;
    float super_poder1 = populacao1 + area1 + pib1 + pib_per_capita1 + (1 / densidade_populacional1) + pontos_turisticos1;

    float densidade_populacional2 = (float)populacao2 / area2;
    float pib_per_capita2 = pib2 / populacao2;
    float super_poder2 = populacao2 + area2 + pib2 + pib_per_capita2 + (1 / densidade_populacional2) + pontos_turisticos2;

    // Comparação
    printf("Comparação de cartas:\n");
    printf("População: Carta %d venceu\n", populacao1 > populacao2 ? 1 : 2);
    printf("Área: Carta %d venceu\n", area1 > area2 ? 1 : 2);
    printf("PIB: Carta %d venceu\n", pib1 > pib2 ? 1 : 2);
    printf("Pontos turísticos: Carta %d venceu\n", pontos_turisticos1 > pontos_turisticos2 ? 1 : 2);
    printf("Super poder: Carta %d venceu\n", super_poder1 > super_poder2 ? 1 

    

    

    return 0;

       
}        
        








