#include <stdio.h>
#include <string.h>

int main() {
    char estado1[3]; 
    char codigo1[10];
    char cidade1[50];
    unsigned long int populacao1; 
    float area1;
    float pib1;
    int pontosturisticos1;
    float densidadepopulacional1;
    float pibpercapital1;

    char estado2[3]; 
    char codigo2[10];
    char cidade2[50];
    unsigned long int populacao2; 
    float area2;
    float pib2;
    int pontosturisticos2;
    float densidadepopulacional2;
    float pibpercapital2;

    // --- Entrada da Carta 1 ---
    printf("\n*** Carta 1 ***\n");
    printf("Estado: ");
    scanf(" %2s", estado1); 

    printf("Código: ");
    scanf(" %s", codigo1);

    getchar(); 
    printf("Cidade: ");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0'; 

    printf("População: ");
    scanf(" %lu", &populacao1);

    printf("Área: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Pontos Turísticos: ");
    scanf(" %d", &pontosturisticos1);

    densidadepopulacional1 = populacao1 / area1;
    pibpercapital1 = (pib1 * 1000000000) / populacao1;

    // --- Entrada da Carta 2 ---
    printf("\n*** Carta 2 ***\n");
    printf("Estado: ");
    scanf(" %2s", estado2);

    printf("Código: ");
    scanf(" %s", codigo2);

    getchar(); // Limpa buffer
    printf("Cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';

    printf("População: ");
    scanf(" %lu", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Pontos Turísticos: ");
    scanf(" %d", &pontosturisticos2);

    densidadepopulacional2 = populacao2 / area2;
    pibpercapital2 = (pib2 * 1000000000) / populacao2;

    // --- Comparação ---
    printf("\nComparação de cartas (Atributo: PIB):\n\n");
    printf("Carta 1 - %s (%s): R$ %.2f bilhões\n", cidade1, estado1, pib1);
    printf("Carta 2 - %s (%s): R$ %.2f bilhões\n", cidade2, estado2, pib2);

    if (pib1 > pib2) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (pib2 > pib1) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("\nResultado: Empate!\n");
    }

    return 0;
}

// Desafio faculdade Estácio de Sá.
// Amxral