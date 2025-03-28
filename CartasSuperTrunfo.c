#include <stdio.h>

int main() {
    // Variáveis para as informações das cartas
    char estado1 = 'A', estado2 = 'B';
    char codigo1[] = "A01", codigo2[] = "B02";
    char cidade1[] = "Sao Paulo", cidade2[] = "Rio de Janeiro";
    int populacao1 = 12325000, populacao2 = 6748000;
    float area1 = 1521.11, area2 = 1200.25;
    float pib1 = 699.28, pib2 = 300.50;
    int pontosTuristicos1 = 50, pontosTuristicos2 = 30;

    // Cálculos da Densidade Populacional e PIB per Capita para a Carta 1
    float densidadePopulacional1 = populacao1 / area1;
    float pibPerCapita1 = pib1 * 1e9 / populacao1; // PIB em reais, então multiplicamos por 1e9

    // Cálculos da Densidade Populacional e PIB per Capita para a Carta 2
    float densidadePopulacional2 = populacao2 / area2;
    float pibPerCapita2 = pib2 * 1e9 / populacao2; // PIB em reais, então multiplicamos por 1e9

    // Exibição dos resultados da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    // Exibição dos resultados da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;
}
 