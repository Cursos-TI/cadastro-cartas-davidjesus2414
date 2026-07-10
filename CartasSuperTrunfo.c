#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Variáveis da Carta 1
    float PIBperCapita1;
    float densidadepopulacional1;
    char estado1[20];
    char codigo1[4];
    char nomedacidade1[50];
    int populacao1;
    float area1;
    float PIB1;
    int pontosturisticos1;
    float superpoder1;

  // Variáveis da Carta 2
     float PIBperCapita2;
     float densidadepopulacional2;
     char estado2[20];
     char codigo2[4];
     char nomedacidade2[50];
     int populacao2;
     float area2;
     float PIB2;
     int pontosturisticos2;
     float superpoder2;

  // Cadastro da Carta 1
     printf("Estado1 (A-H): ");
     scanf(" %[^\n]", &estado1);

     printf("Codigo da carta1 (A01,B02...):  ");
     scanf("%3s", codigo1);

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
     scanf(" %[^\n]", &estado2);
     printf("Codigo da carta2 (A01,B02...):  ");
     scanf("%3s", codigo2);
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
     printf("Estado: %s\n", estado1);
     printf("Codigo: %s\n", codigo1);
     printf("Nome da cidade: %s\n", nomedacidade1);
     printf("Populacao da carta: %d\n", populacao1);
     printf("Area da carta: %.1f\n", area1);
     printf("PIB da carta: %.1f\n", PIB1);
     printf("Pontos turisticos da carta: %d\n", pontosturisticos1);
     printf("Densidade Populacional: %.2f\n", populacao1 / area1);
     printf("PIB per Capita: %.2f\n", PIB1 / populacao1);
     printf("Super Poder: %.2f\n", populacao1 + area1 + PIB1 + pontosturisticos1 + densidadepopulacional1 + PIBperCapita1);

  // Exibição da Carta 2
     printf("\n========== Carta 2 ==========\n");
     printf("Estado: %s\n", estado2);
     printf("Codigo: %s\n", codigo2);
     printf("Nome da cidade: %s\n", nomedacidade2);
     printf("Populacao da carta: %d\n", populacao2);
     printf("Area da carta: %.1f\n", area2);
     printf("PIB da carta: %.1f\n", PIB2);
     printf("Pontos turisticos da carta: %d\n", pontosturisticos2);
     printf("Densidade Populacional: %.2f\n", populacao2 / area2);
     printf("PIB per Capita: %.2f\n", PIB2 / populacao2);
     printf("Super Poder: %.2f\n", populacao2 + area2 + PIB2 + pontosturisticos2 + densidadepopulacional2 + PIBperCapita2);
   

  // Comparaçao das cartas
     printf("\n========== Batalha das Cartas ==========\n");
     if (populacao1 > populacao2) {
         printf("Populaçao: Carta 1 venceu\n");
         printf("Estado Vencedor: %s\n",estado1);     
     } else {
         printf("Populaçao: Carta 2 venceu\n");
         printf("Estado Vencedor: %s\n",estado2);
     }
     
     if (PIB1 > PIB2) {
         printf("PIB: Carta 1 venceu\n");
         printf("Estado Vencedor: %s\n",estado1);    
     } else {
         printf("PIB: Carta 2 venceu\n");
         printf("Estado Vencedor: %s\n",estado2); 
     }
     
     if (densidadepopulacional1 > densidadepopulacional2) {
         printf("Densidade Populacional: Carta 2 venceu\n");
         printf("Estado Vencedor: %s\n",estado2);     
     } else {
         printf("Densidade Populacional: Carta 1 venceu\n");
         printf("Estado Vencedor: %s\n",estado1);
     }
     
     if (superpoder1 > superpoder2) {
         printf("Super Poder: Carta 1 venceu\n");
         printf("Estado Vencedor: %s\n",estado1);   
     } else {
         printf("Super Poder: Carta 2 venceu\n");
         printf("Estado Vencedor: %s\n",estado2);
     }
     
     




return 0;
} 
