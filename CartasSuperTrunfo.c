#include <stdio.h>

int main() {

// Declaração de variaveis para armazenar informções de duas cartas.

    char estado1[20], estado2[20];
    char codigo1[4], codigo2[4];
    char nome1[20], nome2[20];
    int populacao1, populacao2;
    int numero1, numero2;
    float area1, area2;
    float pib1, pib2;
    float densidade1, densidade2;
    float pibc1, pibc2;

// Coleta de dados da primeira carta.

    printf("Carta 1: \n");
    printf("Digite o estado: ");
    scanf("%19s", estado1);

    printf("Digite o código da cidade: ");
    scanf("%3s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%19s", nome1);

    printf("Digite o número de habitantes da cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade: ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &numero1);

// Coleta de dados da segunda carta.

    printf("Carta 2: \n");
    printf("Digite o estado: ");
    scanf("%19s", estado2);

    printf("Digite o código da cidade: ");
    scanf("%3s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%19s", nome2);

    printf("Digite o número de habitantes da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &numero2);

// Impressão de dados da primeira carta.

    printf("Carta 1: \n");
    printf("Estado: %s\nCódigo: %s\n", estado1, codigo1);
    printf("Nome da Cidade: %s\nPopulação: %d\nÁrea: %.2f\n", nome1, populacao1, area1);
    printf("PIB: %.2f\nNúmero de Pontos Turísticos: %d\n", pib1, numero1);
    densidade1 = (float)(populacao1 / area1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    pibc1 = (float)(pib1 / populacao1);
    printf("PIB per Capita: %.2f\n", pibc1);

// Impressão de dados da segunda carta.

    printf("Carta 2: \n");
    printf("Estado: %s\nCódigo: %s\n", estado2, codigo2);
    printf("Nome da Cidade: %s\nPopulação: %d\nÁrea: %.2f\n", nome2, populacao2, area2);
    printf("PIB: %.2f\nNúmero de Pontos Turísticos: %d\n", pib2, numero2);
    densidade2 = (float)(populacao2 / area2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    pibc2 = (float)(pib2 / populacao2);
    printf("PIB per Capita: %.2f\n", pibc2);

    return 0; // Finalizar o programa com susseco.


}