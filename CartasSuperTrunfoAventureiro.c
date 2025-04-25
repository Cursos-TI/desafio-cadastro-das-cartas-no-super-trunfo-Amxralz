#include <stdio.h>
#include <string.h>

int main(){
   
    char estado1;
    char codigo1[10];
    char cidade1[50];
    int populacao1; 
    float area1;
    float pib1;
    int pontosturisticos1;
    float densidadepopulacional1;
    float pibpercapital1;
    
    char estado2;
    char codigo2[10];
    char cidade2[50];
    int populacao2; 
    float area2;
    float pib2;
    int pontosturisticos2;
    float densidadepopulacional2;
    float pibpercapital2;

    printf("\n*** Carta 1 ***\n");

    printf("Estado:");
    scanf(" %c", &estado1);

    printf("Codigo:");
    scanf("%s", &codigo1);

    getchar();
    printf("Cidade:");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0';

    printf("Populacao:");
    scanf("%d", &populacao1);

    printf("Area:");
    scanf("%f", &area1);

    printf("PIB:");
    scanf("%f", &pib1);

    printf("Pontos Turisticos:");
    scanf("%d", &pontosturisticos1);

    //calculo da carta 1
    densidadepopulacional1 = (float) (populacao1 / area1);
    pibpercapital1 = (float) (pib1 * 1000000000) / populacao1;

    printf("\n*** Carta 2 ***\n");

    printf("Estado:");
    scanf(" %c", &estado2);

    printf("Codigo:");
    scanf("%s", &codigo2);

    getchar();
    printf("Cidade:");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';

    printf("Populacao:");
    scanf("%d", &populacao2);

    printf("Area:");
    scanf("%f", &area2);

    printf("PIB:");
    scanf("%f", &pib2);

    printf("Pontos Turisticos:");
    scanf("%d", &pontosturisticos2);

    //calculo da carta 2
    densidadepopulacional2 = (float) (populacao2 / area2);
    pibpercapital2 = (float) (pib2 * 1000000000) / populacao2;

    printf("\n=== Dados Carta 1 ===\n");

    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional1);
    printf("PIB per Capital: %.2f reais\n", pibpercapital1);


    printf("\n=== Dados Carta 2 ===\n");

    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);
    printf("PIB per Capital: %.2f reais\n", pibpercapital2);

    return 0;
    
}