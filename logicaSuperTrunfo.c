#include <stdio.h>

int main(){
    int pontos1, pontos2;
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2, densidade1, densidade2, percapita1, percapita2;
    char estado1[50], estado2[50], nome1[50], nome2[50], codigo1[50], codigo2[50];
    float superpoder1, superpoder2;

    printf("Carta 1:\nEstado: \n");
    scanf("%s", &estado1);

    printf("Codigo: \n");
    scanf("%s", &codigo1);

    printf("Nome da cidade: \n");
    scanf("%s", &nome1);

    printf("Populacao: \n");
    scanf("%d", &populacao1);

    printf("Area: \n");
    scanf("%f", &area1);

    printf("PIB: \n");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: \n");
    scanf("%d", &pontos1);

    densidade1 = (float) populacao1 / area1;
    percapita1 = pib1 / (float) populacao1;
    superpoder1 = (float) populacao1 + area1 + pib1 + pontos1 + 1/densidade1;

    printf("Carta 1:\nEstado: %s\nCodigo: %s\nCidade: %s\nPopulacao: %d\nArea: %f\nPIB: %f\nPts. Turisticos: %d\nDensidade Populacional: %.2f\nPIB Per Capita: %.2f\n", estado1, codigo1, nome1, populacao1, area1, pib1, pontos1, densidade1, percapita1);

    printf("Carta 2:\nEstado: \n");
    scanf("%s", &estado2);

    printf("Codigo: \n");
    scanf("%s", &codigo2);

    printf("Nome da cidade: \n");
    scanf("%s", &nome2);

    printf("Populacao: \n");
    scanf("%d", &populacao2);

    printf("Area: \n");
    scanf("%f", &area2);

    printf("PIB: \n");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: \n");
    scanf("%d", &pontos2);

    densidade2 = (float) populacao2 / area2;
    percapita2 = pib2 / (float) populacao2;
    superpoder2 = (float) populacao2 + area2 + pib2 + pontos2 + 1/densidade2;

    printf("Carta 2:\nEstado: %s\nCodigo: %s\nNome da cidade: %s\nPopulacao: %d\nArea: %f\nPIB: %f\nPts. Turisticos: %d\nDensidade Populacional: %.2f\nPIB Per Capita: %.2f\n", estado2, codigo2, nome2, populacao2, area2, pib2, pontos2, densidade2, percapita2);
    // Comparar as cartas.
    if (superpoder1 > superpoder2) {
        printf("(Super Poder) Carta 1 ganhou! \n");
      } else {
        printf("(Super Poder) Carta 2 ganhou! \n");
      }
    return 0;
}
