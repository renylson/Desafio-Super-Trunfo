#include <stdio.h>

int main() {
    // Variáveis da Carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;
    float pibPerCapita1;

    // Variáveis da Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float pibPerCapita2;

    // Cadastro da Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o código da carta (ex: A01): ");
    scanf(" %3s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("Digite a população: ");
    scanf(" %lu", &populacao1);
    printf("Digite a área (em km²): ");
    scanf(" %f", &area1);
    printf("Digite o PIB (em bilhões de reais): ");
    scanf(" %f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &pontosTuristicos1);

    // Cadastro da Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o código da carta (ex: B02): ");
    scanf(" %3s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("Digite a população: ");
    scanf(" %lu", &populacao2);
    printf("Digite a área (em km²): ");
    scanf(" %f", &area2);
    printf("Digite o PIB (em bilhões de reais): ");
    scanf(" %f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &pontosTuristicos2);

    // Cálculo dos valores derivados
    densidade1 = (float)populacao1 / area1;
    densidade2 = (float)populacao2 / area2;
    pibPerCapita1 = (pib1 * 1000000000.0f) / (float)populacao1;
    pibPerCapita2 = (pib2 * 1000000000.0f) / (float)populacao2;

    // Exibição dos dados
    printf("\n===============================\n");
    printf("       DADOS DAS CARTAS        \n");
    printf("===============================\n");
    
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    // Comparação das cartas - Atributo: População
    printf("\n===============================\n");
    printf("     COMPARAÇÃO DE CARTAS      \n");
    printf("===============================\n");
    
    printf("\nComparação de cartas (Atributo: População):\n\n");
    printf("Carta 1 - %s (%c): %lu habitantes\n", nomeCidade1, estado1, populacao1);
    printf("Carta 2 - %s (%c): %lu habitantes\n", nomeCidade2, estado2, populacao2);

    // Lógica de decisão - maior população vence
    if (populacao1 > populacao2) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        printf("A cidade %s tem %lu habitantes a mais que %s.\n", 
               nomeCidade1, (populacao1 - populacao2), nomeCidade2);
    } else if (populacao2 > populacao1) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", nomeCidade2);
        printf("A cidade %s tem %lu habitantes a mais que %s.\n", 
               nomeCidade2, (populacao2 - populacao1), nomeCidade1);
    } else {
        printf("\nResultado: Empate! Ambas as cartas têm a mesma população.\n");
    }

    // Outras comparações
    printf("\n--- Comparações por outros atributos ---\n");
    
    // Área
    printf("Área: ");
    if (area1 > area2) {
        printf("Carta 1 (%s) venceu - %.2f km²\n", nomeCidade1, area1);
    } else if (area2 > area1) {
        printf("Carta 2 (%s) venceu - %.2f km²\n", nomeCidade2, area2);
    } else {
        printf("Empate - %.2f km²\n", area1);
    }
    
    // PIB
    printf("PIB: ");
    if (pib1 > pib2) {
        printf("Carta 1 (%s) venceu - %.2f bilhões\n", nomeCidade1, pib1);
    } else if (pib2 > pib1) {
        printf("Carta 2 (%s) venceu - %.2f bilhões\n", nomeCidade2, pib2);
    } else {
        printf("Empate - %.2f bilhões\n", pib1);
    }
    
    // Pontos Turísticos
    printf("Pontos Turísticos: ");
    if (pontosTuristicos1 > pontosTuristicos2) {
        printf("Carta 1 (%s) venceu - %d pontos\n", nomeCidade1, pontosTuristicos1);
    } else if (pontosTuristicos2 > pontosTuristicos1) {
        printf("Carta 2 (%s) venceu - %d pontos\n", nomeCidade2, pontosTuristicos2);
    } else {
        printf("Empate - %d pontos\n", pontosTuristicos1);
    }
    
    // Densidade Populacional (menor vence)
    printf("Densidade Populacional: ");
    if (densidade1 < densidade2) {
        printf("Carta 1 (%s) venceu - %.2f hab/km² (menos densa)\n", nomeCidade1, densidade1);
    } else if (densidade2 < densidade1) {
        printf("Carta 2 (%s) venceu - %.2f hab/km² (menos densa)\n", nomeCidade2, densidade2);
    } else {
        printf("Empate - %.2f hab/km²\n", densidade1);
    }
    
    // PIB per Capita
    printf("PIB per Capita: ");
    if (pibPerCapita1 > pibPerCapita2) {
        printf("Carta 1 (%s) venceu - %.2f reais\n", nomeCidade1, pibPerCapita1);
    } else if (pibPerCapita2 > pibPerCapita1) {
        printf("Carta 2 (%s) venceu - %.2f reais\n", nomeCidade2, pibPerCapita2);
    } else {
        printf("Empate - %.2f reais\n", pibPerCapita1);
    }

    printf("\n===============================\n");
    printf("     FIM DA COMPARAÇÃO         \n");
    printf("===============================\n");

    return 0;
}