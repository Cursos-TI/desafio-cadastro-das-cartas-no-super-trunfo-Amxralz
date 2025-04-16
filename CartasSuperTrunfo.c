#include <stdio.h>
#include <string.h>

int main(){

    char estado1;
    char codigo1[4];
    char cidade1[20];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;

    char estado2;
    char codigo2[4];
    char cidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;


    printf("==Carta 1==\n");
    
    printf("Estado de A até H:");
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

    printf("Pontos turisticos:");
    scanf("%d", &pontosturisticos1);


    printf(" \n==Carta 2==\n");

    printf("Estado de A até H:");
    scanf(" %c", &estado2);

    printf("Codigo: ");
    scanf("%s", &codigo2);

    getchar();
    printf("Cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';
    
    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Pontos turisticos: ");
    scanf("%d", &pontosturisticos2);
    
    

    printf("\n=== Dados da Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %f km²\n", area1);
    printf("PIB: %f Bilhoes de Reais\n", pib1);
    printf("Pontos turisticos: %d\n", pontosturisticos1);

    printf("\n=== Dados da Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %f km²\n", area2);
    printf("PIB: %f Bilhões de reais\n", pib2);
    printf("Pontos turisticos: %d\n", pontosturisticos2);

    return 0;


}