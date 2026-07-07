#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Variáveis da Carta 1
    float densidadepopulacional1;
    char estado1;
    char codigo1[4];
    char nomedacidade1[50];
    int populacao1;
    float area1;
    float PIB1;
    int pontosturisticos1;

  // Variáveis da Carta 2
     float densidadepopulacional2;
     char estado2;
     char codigo2[4];
     char nomedacidade2[50];
     int populacao2;
     float area2;
     float PIB2;
     int pontosturisticos2;

  // Cadastro da Carta 1
     printf("Estado1 (A-H): ");
     scanf(" %c", &estado1);
     printf("Codigo da carta1 (A01,B02...): ");
     scanf("%s", codigo1);
     printf("Nome da cidade1: ");
     scanf(" %[^\n]", nomedacidade1);
     printf("Populacao da carta1: ");
     scanf("%d", &populacao1);
     printf("Area da carta1: ");
     scanf("%f", &area1);
     printf("PIB da carta1: ");
     scanf("%f", &PIB1);
     printf("Pontos turisticos da carta1: ");
     scanf("%d", &pontosturisticos1);

  // Cadastro da Carta 2
     printf("Estado2 (A-H): ");
     scanf(" %c", &estado2);
     printf("Codigo da carta2 (A01,B02...): \n");
     scanf("%s", codigo2);
     printf("Nome da cidade2: ");
     scanf(" %[^\n]", nomedacidade2);
     printf("Populacao da carta2: ");
     scanf("%d", &populacao2);
     printf("Area da carta2: ");
     scanf("%f", &area2);
     printf("PIB da carta2: ");
     scanf("%f", &PIB2);
     printf("Pontos turisticos da carta2: ");
     scanf("%d", &pontosturisticos2);

  // Exibição da Carta 1
     printf("\n========== Carta 1 ==========\n");
     printf("Estado: %c\n", estado1);
     printf("Codigo: %s\n", codigo1);
     printf("Nome da cidade: %s\n", nomedacidade1);
     printf("Populacao da carta: %d\n", populacao1);
     printf("Area da carta: %.1f\n", area1);
     printf("PIB da carta: %.1f\n", PIB1);
     printf("Pontos turisticos da carta: %d\n", pontosturisticos1);
     printf("Densidade Populacional: %.2f\n", populacao1 / area1);

  // Exibição da Carta 2
     printf("\n========== Carta 2 ==========\n");
     printf("Estado: %c\n", estado2);
     printf("Codigo: %s\n", codigo2);
     printf("Nome da cidade: %s\n", nomedacidade2);
     printf("Populacao da carta: %d\n", populacao2);
     printf("Area da carta: %.1f\n", area2);
     printf("PIB da carta: %.1f\n", PIB2);
     printf("Pontos turisticos da carta: %d\n", pontosturisticos2);
     printf("Densidade Populacional: %.2f\n", populacao2 / area2);

return 0;
} 
