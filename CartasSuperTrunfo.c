#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {

    char estado, código da cidade[3], nome[20];
    int população, número de pontos turísticos;
    float área, PIB;

    printf("Carta 1: \nDigite o estado: \n");
    scanf("%s", &estado);

    printf("Digite o código da cidade: \n");
    scanf("%s", &código da cidade);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome);

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%d", &população);

    printf("Digite a área da cidade: \n");
    scanf("%f", &área);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &número de pontos turísticos);

    printf("Carta 2: \nDigite o estado: \n");
    scanf("%s", &estado);

    printf("Digite o código da cidade: \n");
    scanf("%s", &código da cidade);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome);

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%d", &população);

    printf("Digite a área da cidade: \n");
    scanf("%f", &área);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &número de pontos turísticos);

    printf("Carta 1: \nEstado: %s\nCódigo: %s\n", estado, código da cidade);
    printf("Nome da Cidade: %s\nPopulação: %d\nÁrea: %f\n", nome, população, área);
    printf("PIB: %f\nNúmero de Pontos Turísticos: %d\n", PIB, número de pontos turísticos);

    printf("Carta 2: \nEstado: %s\nCódigo: %s\n", estado, código da cidade);
    printf("Nome da Cidade: %s\nPopulação: %d\nÁrea: %f\n", nome, população, área);
    printf("PIB: %f\nNúmero de Pontos Turísticos: %d\n", PIB, número de pontos turísticos);

        
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
