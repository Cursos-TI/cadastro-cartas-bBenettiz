#include <stdio.h>

int main() {
    char estado[1], cod[2], nomecidade[50], keep[1];
    int populacao, pontostu, i=1;
    float area, pib, densi, pibcap;


    printf("Digite o estado (sigla): ");
    scanf("%s", estado);
    printf("Digite o código da cidade: ");
    scanf("%s", cod);
    printf("Digite o nome da cidade: ");
    scanf("%s", nomecidade);
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area);
    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &pib);
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontostu);

    printf("Cidade: %s, %s\n", nomecidade, estado);
    printf("Código: %s\n", cod);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Pontos turísticos: %d\n", pontostu);
    densi = populacao / area;
    pibcap = pib / populacao;
    printf("Densidade demográfica: %.2f habitantes/km²\n", densi);
    printf("PIB per capita: %.2f bilhões\n", pibcap);



    printf("Digite o estado (sigla): ");
    scanf("%s", estado);
    printf("Digite o código da cidade: ");
    scanf("%s", cod);
    printf("Digite o nome da cidade: ");
    scanf("%s", nomecidade);
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area);
    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &pib);
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontostu);

    
    printf("Cidade: %s, %s\n", nomecidade, estado);
    printf("Código: %s\n", cod);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Pontos turísticos: %d\n", pontostu);
    densi = populacao / area;
    pibcap = pib / populacao;
    printf("Densidade demográfica: %.2f habitantes/km²\n", densi);
    printf("PIB per capita: %.2f bilhões\n", pibcap);




}
