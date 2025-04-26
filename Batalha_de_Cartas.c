#include <stdio.h>
#include <string.h>

int main() {
    
    char estado1;
    char codigo1[10];
    char cidade1[50];
    unsigned long int populacao1; 
    float area1;
    float pib1;
    int pontosturisticos1;
    float densidadepopulacional1;
    float pibpercapital1;
    float superpoder1;

    char estado2;
    char codigo2[10];
    char cidade2[50];
    unsigned long int populacao2; 
    float area2;
    float pib2;
    int pontosturisticos2;
    float densidadepopulacional2;
    float pibpercapital2;
    float superpoder2;
    

    printf("\n*** Carta 1 ***\n");

    printf("Estado:", estado1);
    scanf(" %c", &estado1);

    printf("Código:", codigo1);
    scanf(" %s", &codigo1);

    getchar();
    printf("Cidade:");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0';

    printf("População:", populacao1);
    scanf(" %lu", &populacao1);

    printf("Área:", area1);
    scanf("%f", &area1);

    printf("PIB:", pib1);
    scanf("%f", &pib1);

    printf("Pontos Turisticos:", pontosturisticos1);
    scanf(" %d", &pontosturisticos1);

    //Calculo carta 1
    densidadepopulacional1 = populacao1 / area1;
    pibpercapital1 = (pib1 * 1000000000) / populacao1;
    superpoder1 = (float)populacao1 + area1 + (pib1 * 1000000000) + (float)pontosturisticos1 + pibpercapital1 + (1 / densidadepopulacional1);

    printf("\n*** Carta 2 ***\n");

    printf("Estado:", estado2);
    scanf(" %c", &estado2);

    printf("Código:", codigo2);
    scanf(" %s", &codigo2);

    getchar();
    printf("Cidade:");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';

    printf("População:", populacao2);
    scanf(" %lu", &populacao2);

    printf("Área:", area2);
    scanf("%f", &area2);

    printf("PIB:", pib2);
    scanf("%f", &pib2);

    printf("Pontos Turisticos:", pontosturisticos2);
    scanf(" %d", &pontosturisticos2);

    //Calculo carta 2
    densidadepopulacional2 = populacao2 / area2;
    pibpercapital2 = (pib2 * 1000000000) / populacao2;
    superpoder2 = (float)populacao2 + area2 + (pib2 * 1000000000) + (float)pontosturisticos2 + pibpercapital2 + (1 / densidadepopulacional2);

    // Comparaçào das cartas
    printf("\nComparação de Cartas:\n");

    printf("População: Carta %d venceu (%d)\n", (populacao1 > populacao2) ? 1 : 2, (populacao1 > populacao2));
    printf("Área: Carta %d venceu (%d)\n", (area1 > area2) ? 1 : 2, (area1 > area2));
    printf("PIB: Carta %d venceu (%d)\n", (pib1 > pib2) ? 1 : 2, (pib1 > pib2));
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", (pontosturisticos1 > pontosturisticos2) ? 1 : 2, (pontosturisticos1 > pontosturisticos2));
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidadepopulacional1 < densidadepopulacional2) ? 1 : 2, (densidadepopulacional1 < densidadepopulacional2));
    printf("PIB per Capita: Carta %d venceu (%d)\n", (pibpercapital1 > pibpercapital2) ? 1 : 2, (pibpercapital1 > pibpercapital2));
    printf("Super Poder: Carta %d venceu (%d)\n", (superpoder1 > superpoder2) ? 1 : 2, (superpoder1 > superpoder2));


    return 0;
}