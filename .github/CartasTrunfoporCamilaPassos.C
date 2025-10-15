#include <stdio.h>

int main() {
    printf("Desafio Super Trunfo - Países\n");
    printf("Tema 1 - Cadastro das Cartas\n");

    // Variáveis da Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;
    float pibPerCapita1;
    float superPoder1;

    // Variáveis da Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float pibPerCapita2;
    float superPoder2;

    // --- Cadastro da Carta 1 ---
    printf("\nCadastro da Carta 1\n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Digite a Populacao: ");
    scanf("%lu", &populacao1);

    printf("Digite a Area (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // --- Cadastro da Carta 2 ---
    printf("\nCadastro da Carta 2\n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o Codigo da Carta (ex: B02): ");
    scanf("%s", &codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", &cidade2);

    printf("Digite a Populacao: ");
    scanf("%lu", &populacao2);

    printf("Digite a Area (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // --- Cálculos ---
    densidade1 = (area1 > 0) ? (float)populacao1 / area1 : 0;
    densidade2 = (area2 > 0) ? (float)populacao2 / area2 : 0;

    pibPerCapita1 = (populacao1 > 0) ? (pib1 * 1e9f) / (float)populacao1 : 0;
    pibPerCapita2 = (populacao2 > 0) ? (pib2 * 1e9f) / (float)populacao2 : 0;

    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (densidade1 > 0 ? 1/densidade1 : 0);
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (densidade2 > 0 ? 1/densidade2 : 0);

    // --- Exibição das Cartas ---
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c | Codigo: %s | Cidade: %s\n", estado1, codigo1, cidade1);
    printf("Populacao: %lu | Area: %.2f km² | PIB: %.2f bi\n", populacao1, area1, pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f | PIB per Capita: %.2f | Super Poder: %.2f\n",
           densidade1, pibPerCapita1, superPoder1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c | Codigo: %s | Cidade: %s\n", estado2, codigo2, cidade2);
    printf("Populacao: %lu | Area: %.2f km² | PIB: %.2f bi\n", populacao2, area2, pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f | PIB per Capita: %.2f | Super Poder: %.2f\n",
           densidade2, pibPerCapita2, superPoder2);

    // --- Comparações ---
    printf("\n=== Comparacao de Cartas ===\n");
    printf("Populacao: Carta %d venceu\n", (populacao1 > populacao2) ? 1 : 2);
    printf("Area: Carta %d venceu\n", (area1 > area2) ? 1 : 2);
    printf("PIB: Carta %d venceu\n", (pib1 > pib2) ? 1 : 2);
    printf("Pontos Turisticos: Carta %d venceu\n", (pontosTuristicos1 > pontosTuristicos2) ? 1 : 2);
    printf("Densidade Populacional: Carta %d venceu\n", (densidade1 < densidade2) ? 1 : 2); // menor vence
    printf("PIB per Capita: Carta %d venceu\n", (pibPerCapita1 > pibPerCapita2) ? 1 : 2);
    printf("Super Poder: Carta %d venceu\n", (superPoder1 > superPoder2) ? 1 : 2);

    return 0;
}
