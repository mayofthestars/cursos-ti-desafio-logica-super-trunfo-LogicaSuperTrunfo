#include <stdio.h>

int main(){
    int pontos1, pontos2;
    int opcao;
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2, densidade1, densidade2;
    char nome1[50], nome2[50];
  // Registrar dados da carta 1.
    printf("Carta 1: \n");
    
    printf("Nome do país: \n");
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

    // Registrar dados da carta 2.
    printf("Carta 2:\n");

    printf("Nome do país: \n");
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

    // Escolher um valor para comparar.
  printf("Escolha um valor para comparar:\n");
  printf("1. População\n");
  printf("2. Área\n");
  printf("3. PIB\n");
  printf("4. Número de Pontos Turísticos\n");
  printf("5. Densidade Demográfica: \n");
  scanf("%d", &opcao);

  printf("Calculando...\n");

    // Comparar as cartas.
    switch (opcao) {
    case 1:
    printf ("Carta 1:\nNome do país: %s\nPopulacao: %d\n", nome1, populacao1);
    printf ("Carta 2:\nNome do país: %s\nPopulacao: %d\n", nome2, populacao2);
    if (populacao1 > populacao2) {
        printf(" Carta 1 ganhou! \n");
      } else if (populacao1 <  populacao2){
        printf(" Carta 2 ganhou! \n");
      } else
      printf ("Empate!");
      break;
    case 2:
    printf ("Carta 1:\nNome do país: %s\nÁrea: %d\n", nome1, area1);
    printf ("Carta 2:\nNome do país: %s\nÁrea: %d\n", nome2, area2);
    if (area1 > area2) {
        printf(" Carta 1 ganhou! \n");
      } else if (area1 <  area2){
        printf(" Carta 2 ganhou! \n");
      } else
      printf ("Empate!");
      break;
case 3:
    printf ("Carta 1:\nNome do país: %s\nPIB: %d\n", nome1, pib1);
    printf ("Carta 2:\nNome do país: %s\nPIB: %d\n", nome2, pib2);
    if (pib1 > pib2) {
        printf(" Carta 1 ganhou! \n");
      } else if (pib1 <  pib2){
        printf(" Carta 2 ganhou! \n");
      } else
      printf ("Empate!");
      break;
case 4:
printf ("Carta 1:\nNome do país: %s\nNúmero de Pontos Turísticos: %d\n", nome1, pontos1);
printf ("Carta 2:\nNome do país: %s\nNúmero de Pontos Turísticos: %d\n", nome2, pontos2);
if (pontos1 > pontos2) {
    printf(" Carta 1 ganhou! \n");
  } else if (pontos1 <  pontos2){
    printf(" Carta 2 ganhou! \n");
  } else
  printf ("Empate!");
  break;
case 5:
printf ("Carta 1:\nNome do país: %s\nDensidade Demográfica: %d\n", nome1, pontos1);
printf ("Carta 2:\nNome do país: %s\nDensidade Demográfica: %d\n", nome2, pontos2);
if (densidade2 > densidade1) {
    printf(" Carta 1 ganhou! \n");
  } else if (densidade2 <  densidade1){
    printf(" Carta 2 ganhou! \n");
  } else
  printf ("Empate!");
  break;
    default:
      printf("Opção inválida. Tente novamente.\n");
  }
}
