#include <stdio.h>

int main() {

// Declaração de variaveis para armazenar informções de duas cartas.

    char estado1[20], estado2[20];
    char codigo1[4], codigo2[4];
    char nome1[20], nome2[20];
    unsigned long int populacao1, populacao2;
    int numero1, numero2;
    float area1, area2;
    float pib1, pib2;
    float densidade1, densidade2;
    float pibc1, pibc2;
    float superpoder1, superpoder2;
    int opcao, opcao1, opcao2;
    float escolha1, escolha11, escolha2, escolha22;
    float resultado1, resultado2;

// Coleta de dados da primeira carta.

    printf("Carta 1: \n");
    printf("Digite o estado: \n");
    scanf("%19s", estado1);

    printf("Digite o código da cidade: \n");
    scanf("%3s", codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%19s", nome1);

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%lu", &populacao1);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &numero1);

// Coleta de dados da segunda carta.

    printf("Carta 2: \n");
    printf("Digite o estado: \n");
    scanf("%19s", estado2);

    printf("Digite o código da cidade: \n");
    scanf("%3s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%19s", nome2);

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%lu", &populacao2);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &numero2);

// Impressão de dados da primeira carta.

    printf("Carta 1: \n");
    printf("Estado: %s\nCódigo: %s\n", estado1, codigo1);
    printf("Nome da Cidade: %s\nPopulação: %lu\nÁrea: %.2f\n", nome1, populacao1, area1);
    printf("PIB: %.2f\nNúmero de Pontos Turísticos: %d\n", pib1, numero1);
    densidade1 = (float)(populacao1 / area1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    pibc1 = (float)(pib1 / populacao1);
    printf("PIB per Capita: %.2f\n", pibc1);
    superpoder1 = (float)(populacao1 + area1 + pib1 + numero1 + pibc1 + densidade1 * 1);
    printf("Super Poder: %.2f\n", superpoder1);

// Impressão de dados da segunda carta.

    printf("Carta 2: \n");
    printf("Estado: %s\nCódigo: %s\n", estado2, codigo2);
    printf("Nome da Cidade: %s\nPopulação: %lu\nÁrea: %.2f\n", nome2, populacao2, area2);
    printf("PIB: %.2f\nNúmero de Pontos Turísticos: %d\n", pib2, numero2);
    densidade2 = (float)(populacao2 / area2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    pibc2 = (float)(pib2 / populacao2);
    printf("PIB per Capita: %.2f\n", pibc2);
    superpoder2 = (float)(populacao2 + area2 + pib2 + numero2 + pibc2 + densidade2 * 1);
    printf("Super Poder: %.2f\n", superpoder2);
    
//Comparação dos dados de cada carta

    printf("*** Comparação de Cartas ***\n");
    if(populacao1 > populacao2){
        printf("População da cidade %s maior que da cidade %s\n", nome1, nome2);
    } else {
        printf("População da cidade %s maior que da cidade %s\n", nome2, nome1);
    }
    if(area1 > area2){
        printf("Área da cidade %s maior que da cidade %s\n", nome1, nome2);
    } else {
        printf("Área da cidade %s maior que da cidade %s\n", nome2, nome1);
    }
    if(pib1 > pib2){
        printf("PIB da cidade %s maior que da cidade %s\n", nome1, nome2);        
    } else {
        printf("PIB da cidade %s maior que da cidade %s\n", nome2, nome1);
    }
    if(numero1 > numero2){
        printf("Número de pontos turísticos da cidade %s maior que da cidade %s\n", nome1, nome2);
    } else {
        printf("Número de pontos turísticos da cidade %s maior que da cidade %s\n", nome2, nome1);
    }
    if(densidade1 < densidade2){
        printf("Densidade populacional da cidade %s menor que da cidade %s\n", nome1, nome2);
    } else {
        printf("Densidade populacional da cidade %s menor que da cidade %s\n", nome2, nome1);
    }
    if(pibc1 > pibc2){
        printf("PIB per capita da cidade %s maior que da cidade %s\n", nome1, nome2);
    } else {
        printf("PIB per capita da cidade %s maior que da cidade %s\n", nome2, nome1);
    }
    if(superpoder1 > superpoder2){
        printf("Super Poder da cidade %s maior que da cidade %s\n", nome1, nome2);
    } else{
        printf("Super Poder da cidade %s maior que da cidade %s\n", nome2, nome1);
    }

    //Comparando Super Poder

    printf("*** COMPARANDO O SUPERPODER ***\n");
    printf("Carta 1: Cidade de %s tem Super Poder de %.2f\n", nome1, superpoder1);
    printf("Carta 2: Cidade de %s tem Super Poder de %.2f\n", nome2, superpoder2);
    if(superpoder1 > superpoder2){
        printf("Carta 1: Cidade de %s VENCEU!!!\n", nome1);
    } else {
        printf("Carta 2: Cidade de %s VENCEU!!!\n", nome2);
    }

    //Menu interativo para comparação de cartas de um atributo.

    printf("*** Comparação de Cartas ***\n");
    printf("Escolha um atributo para comparação!\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    printf("Entre com a opção do atributo: \n");
    scanf("%d", &opcao);

    //Comparação da opção escolhida.
    switch (opcao) 
    {
        case 1:
        printf("Cidade %s tem população de %lu.\n", nome1, populacao1);
        printf("Cidade %s tem população de %lu.\n", nome2, populacao2);
          if(populacao1 == populacao2){
            printf("Empate!");
          } else if (populacao1 > populacao2) {
            printf("Cidade %s VENCEU!!!\n", nome1);
          } else {
            printf("Cidade %s VENCEU!!!\n", nome2);
          }
        break;

        case 2:
        printf("Cidade %s tem área de %2.f.\n", nome1, area1);
        printf("Cidade %s tem área de %2.f.\n", nome2, area2);
           if(area1 == area2){
            printf("Empate!");
          } else if (area1 > area2) {
            printf("Cidade %s VENCEU!!!\n", nome1);
          } else {
            printf("Cidade %s VENCEU!!!\n", nome2);
          }
          break;

        case 3:
        printf("Cidade %s tem PIB de %2.f.\n", nome1, pib1);
        printf("Cidade %s tem PIB de %2.f.\n", nome2, pib2);
           if(pib1 == pib2){
            printf("Empate!");
          } else if (pib1 > pib2) {
            printf("Cidade %s VENCEU!!!\n", nome1);
          } else {
            printf("Cidade %s VENCEU!!!\n", nome2);
          }
          break;

        case 4:
        printf("Cidade %s tem %d pontos turísticos.\n", nome1, numero1);
        printf("Cidade %s tem %d pontos turísticos.\n", nome2, numero2);
           if(numero1 == numero2){
            printf("Empate!");
          } else if (numero1 > numero2) {
            printf("Cidade %s VENCEU!!!\n", nome1);
          } else {
            printf("Cidade %s VENCEU!!!\n", nome2);
          }
          break;

        case 5:
        printf("Cidade %s tem densidade demográfica de %f.\n", nome1, densidade1);
        printf("Cidade %s tem Densidade demográfica de %f.\n", nome2, densidade2);
           if(densidade1 == densidade2) {
            printf("Empate!");
          } else if (densidade1 < densidade2) {
            printf("Cidade %s VENCEU!!!\n", nome1);
          } else {
            printf("Cidade %s VENCEU!!!\n", nome2);
          }
          break;
        default:
          printf("Opção Inválida\n");
          break;

    }

    //Comparação de dois atributos.
    printf("*** Comparação de dois atributos das Cartas ***\n");
    printf("Escolha dois dos atributos para comparação!\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    printf("Escolha o primeiro atributo: \n");
    scanf("%d", &opcao1);
    printf("Escolha o segundo atributo: \n");
    scanf("%d", &opcao2);
    
    if (opcao1 == opcao2){
      printf("Atributo escolhido duas vezes.\n");
    } else {
      switch (opcao1){
        case 1:
        printf("População da %s é: %lu\n", nome1, populacao1);
        printf("População da %s é: %lu\n", nome2, populacao2);
        escolha1 = populacao1;
        escolha11 = populacao2;
        break;
        case 2:
        printf("Área da %s é: %.2f\n", nome1, area1);
        printf("Área da %s é: %.2f\n", nome2, area2);
        escolha1 = area1;
        escolha11 = area2;
        break;
        case 3:
        printf("PIB da %s é: %.2f\n", nome1, pib1);
        printf("PIB da %s é: %.2f\n", nome2, pib2);
        escolha1 = pib1;
        escolha11 = pib2;
        break;
        case 4:
        printf("Número de pontos turísticos da %s é: %d\n", nome1, numero1);
        printf("Número de pontos turísticos da %s é: %d\n", nome2, numero2);
        escolha1 = numero1;
        escolha11 = numero2;
        break;
        case 5:
        printf("Densidade demográfica da %s é: %.2f\n", nome1, densidade1);
        printf("Densidade demográfica da %s é: %.2f\n", nome2, densidade2);
        escolha1 = densidade1;
        escolha11 = densidade2;
        break;
        default:
        printf("Opção Inválida.\n");
        break;
      }
        switch (opcao2)
      {
        case 1:
        printf("População da %s é: %lu\n", nome1, populacao1);
        printf("População da %s é: %lu\n", nome2, populacao2);
        escolha2 = populacao1;
        escolha22 = populacao2;
        break;
        case 2:
        printf("Área da %s é: %.2f\n", nome1, area1);
        printf("Área da %s é: %.2f\n", nome2, area2);
        escolha2 = area1;
        escolha22 = area2;
        break;
        case 3:
        printf("PIB da %s é: %.2f\n", nome1, pib1);
        printf("PIB da %s é: %.2f\n", nome2, pib2);
        escolha2 = pib1;
        escolha22 = pib2;
        break;
        case 4:
        printf("Número de pontos turísticos da %s é: %d\n", nome1, numero1);
        printf("Número de pontos turísticos da %s é: %d\n", nome2, numero2);
        escolha2 = numero1;
        escolha22 = numero2;
        break;
        case 5:
        printf("Densidade demográfica da %s é: %.2f\n", nome1, densidade1);
        printf("Densidade demográfica da %s é: %.2f\n", nome2, densidade2);
        escolha2 = densidade1;
        escolha22 = densidade2;
        break;
        default:
        printf("Opção Inválida.\n");
        break;
      }
      resultado1 = escolha1 + escolha2;
      resultado2 = escolha11 + escolha22;
      printf("Cidade %s tem o total de %.2f pontos!\n", nome1, resultado1);
      printf("Cidade %s tem o total de %.2f pontos!\n", nome2, resultado2);

      if (resultado1 > resultado2)
      {
         printf("Cidade %s venceu!\n", nome1);
      } else if (resultado1 < resultado2){
        printf("Cidade %s venceu!\n", nome2);
      } else {
        printf("Empate!\n");
      }

    }


    return 0; // Finalizar o programa com susseco.

}