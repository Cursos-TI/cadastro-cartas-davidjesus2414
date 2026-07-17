#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Variáveis da Carta 1
    int resultado1;
    char primeiroatributo;
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
     int resultado2;
     char segundoatributo;
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
     scanf(" %[^\n]", estado1);

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
     scanf(" %[^\n]", estado2);
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


  // Batalha das cartas
     srand(time(0));
     densidadepopulacional1 = 1; 
     densidadepopulacional2 = 0;
     PIBperCapita1 = 1;
     PIBperCapita2 = 0;
     superpoder1 = 1;
     superpoder2 = 0;
     pontosturisticos1 = 1;
     pontosturisticos2 = 0;
     
   

  // Comparaçao das cartas
     printf("\n========== Batalha das Cartas ==========\n");
     printf("Escolha o primeiro Atributo para comparar:\n");
     printf("A - Densidade Populacional\n");
     printf("B - PIB per Capita\n");


     printf("Escolha a comparacao: ");
     scanf(" %c", &primeiroatributo);

     switch (primeiroatributo)
     {
     case 'A':
     case 'a':
        printf("\n######Voce escolheu Densidade Populacional######\n");
        resultado1 = densidadepopulacional1 > densidadepopulacional2 ? 1 : 0;

        break;
        case 'B':
        case 'b':
        printf("\n######Voce escolheu PIB per Capita######\n");
        resultado1 = PIBperCapita1 > PIBperCapita2 ? 1 : 0;
        break;
     default:
        break;
     }


     printf("Escolha o segundo Atributo para comparar:\n");
     printf("A - Densidade Populacional\n");
     printf("B - PIB per Capita\n");


     printf("Escolha a comparacao: ");
     scanf(" %c", &segundoatributo);

     if (primeiroatributo == segundoatributo) {
        printf("Voce escolheu o mesmo atributo para comparar, escolha outro atributo.\n");
        } else {
            switch (segundoatributo)
            {
            case 'A':
            case 'a':
                printf("\n######Voce escolheu Densidade Populacional######\n");
                resultado2 = densidadepopulacional1 > densidadepopulacional2 ? 1 : 0;
                break;
            case 'B':
            case 'b':
                printf("\n######Voce escolheu PIB per Capita######\n");
                resultado2 = PIBperCapita1 > PIBperCapita2 ? 1 : 0;
                break;
            default:    
                break;
            }

            if (resultado1 == 1) {
            printf("\nCarta 2 venceu a Densidade Populacional!\n");
            printf("Carta 2:%s\n", estado2);
        } else {
            printf("\nCarta 1 venceu a Densidade Populacional!\n");
            printf("Carta 1:%s\n", estado1);
        }

         if (resultado1 == 1) {
            printf("\nCarta 1 venceu o PIB per Capita!\n");
            printf("Carta 1:%s\n", estado1);
        } else {
            printf("\nCarta 2 venceu o PIB per Capita!\n");
            printf("Carta 2:%s\n", estado2);
        }

        

            if (resultado1 == resultado2) {
                printf("Empate! Nao houve vencedor.\n");
            } else if (resultado1 > resultado2) {
                printf("\nCarta 1 venceu a Partida!\n");
                printf("Carta 1:%s\n", estado1);
            } else {
                printf("Carta 2 venceu a Partida!\n");
                printf("Carta 2:%s\n", estado2);
            }
        }
    return 0;
}
     
        
        
     
     










