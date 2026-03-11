#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    char estado[1], cod[2], nomecidade[50], keep[1];
    int populacao, pontostu, i=1;
    float area, pib;


for (i = 1; i =! 0; i++) {
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

    printf("Deseja cadastrar outra carta? (s/n): ");
    scanf("%s", &keep); 
    if (keep[0] == 'n' || keep[0] == 'N') {
        break; 
    }

  return 0;
}
