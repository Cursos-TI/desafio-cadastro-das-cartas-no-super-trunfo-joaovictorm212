#include <stdio.h>

// Função para calcular o Super Poder
float calcularSuperPoder(unsigned long int populacao, float area, float pib, int pontosTuristicos, float pibPerCapita, float densidadePopulacional) {
    // A soma inclui a população, área, PIB, pontos turísticos, PIB per capita e o inverso da densidade populacional
    return (float)(populacao + area + pib * 1e9 + pontosTuristicos + pibPerCapita + (1 / densidadePopulacional));
}

int main() {
    // Variáveis para as informações das cartas
    char estado1 = 'A', estado2 = 'B';
    char codigo1[] = "A01", codigo2[] = "B02";
    char cidade1[] = "Sao Paulo", cidade2[] = "Rio de Janeiro";
    unsigned long int populacao1 = 12325000, populacao2 = 6748000;
    float area1 = 1521.11, area2 = 1200.25;
    float pib1 = 699.28, pib2 = 300.50;
    int pontosTuristicos1 = 50, pontosTuristicos2 = 30;

    // Cálculos da Densidade Populacional e PIB per Capita para a Carta 1
    float densidadePopulacional1 = populacao1 / area1;
    float pibPerCapita1 = pib1 * 1e9 / populacao1; // PIB em reais, então multiplicamos por 1e9

    // Cálculos da Densidade Populacional e PIB per Capita para a Carta 2
    float densidadePopulacional2 = populacao2 / area2;
    float pibPerCapita2 = pib2 * 1e9 / populacao2; // PIB em reais, então multiplicamos por 1e9

    // Calcular o Super Poder de ambas as cartas
    float superPoder1 = calcularSuperPoder(populacao1, area1, pib1, pontosTuristicos1, pibPerCapita1, densidadePopulacional1);
    float superPoder2 = calcularSuperPoder(populacao2, area2, pib2, pontosTuristicos2, pibPerCapita2, densidadePopulacional2);

    // Exibição das informações da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1); // População com %lu para unsigned long int
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    // Exibição das informações da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2); // População com %lu para unsigned long int
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    // Comparação dos atributos das cartas
    printf("\nComparacao de Cartas:\n");

    // Comparação de População
    printf("Populacao: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    
    // Comparação de Área
    printf("Area: Carta 1 venceu (%d)\n", area1 > area2);
    
    // Comparação de PIB
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    
    // Comparação de Pontos Turísticos
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);
    
    // Comparação de Densidade Populacional (menor valor vence)
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidadePopulacional1 < densidadePopulacional2);
    
    // Comparação de PIB per Capita
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
    
    // Comparação de Super Poder
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    return 0;
}