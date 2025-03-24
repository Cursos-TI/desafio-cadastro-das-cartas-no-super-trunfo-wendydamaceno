#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    // Variáveis para armazenar os dados das duas cartas
    char Estado1, Estado2;
    char CodigoDaCarta1[5], CodigoDaCarta2[5];
    char NomeDaCidade1[30], NomeDaCidade2[30];
    int Populacao1, Populacao2, NumerosDePontosTuristicos1, NumerosDePontosTuristicos2;
    float Area1, Area2; 
    float PIB1, PIB2;
    float DensidadePopulacional1, DensidadePopulacional2;
    float PIBperCapita1, PIBperCapita2;
    char primeiroAtributo, segundoAtributo;
    int Resultado1, Resultado2;
    int soma1, soma2;

    // Entrada de dados para a primeira carta
    printf("\n --- Desafio Super Trunfo --- \n");

    printf("Digite a letra do estado (A-H) da primeira carta:\n");
    scanf(" %c", &Estado1);

    printf("Digite o código da primeira carta:\n");
    scanf("%s", CodigoDaCarta1);

    printf("Digite o nome da primeira cidade:\n");
    scanf("%s", NomeDaCidade1);  

    printf("Digite o número da população da cidade:\n");
    scanf("%d", &Populacao1);

    printf("Digite a área da cidade em km²:\n");
    scanf("%f", &Area1);

    printf("Digite o PIB da cidade (em bilhões de reais):\n");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turísticos da cidade:\n");
    scanf("%d", &NumerosDePontosTuristicos1);

    // Cálculo para densidade populacional e PIB per capita
    DensidadePopulacional1 = (Area1 != 0) ? (Populacao1 / Area1) : 0;
    PIBperCapita1 = (Populacao1 != 0) ? (PIB1 / Populacao1) : 0;

    // Entrada de dados para a segunda carta
    printf("\n*** Digite a letra do estado (A-H) da segunda carta:\n");
    scanf(" %c", &Estado2); 

    printf("Digite o código da segunda carta:\n");
    scanf("%s", CodigoDaCarta2);

    printf("Digite o nome da cidade da segunda carta:\n");
    scanf(" %[^\n]s", NomeDaCidade2); 

    printf("Digite a população da cidade:\n");
    scanf("%d", &Populacao2);

    printf("Digite a área da cidade em km²:\n");
    scanf("%f", &Area2);

    printf("Digite o PIB da cidade (em bilhões de reais):\n");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos da cidade:\n");
    scanf("%d", &NumerosDePontosTuristicos2);

    // Cálculo para densidade populacional e PIB per capita
    DensidadePopulacional2 = (Area2 != 0) ? (Populacao2 / Area2) : 0;
    PIBperCapita2 = (Populacao2 != 0) ? (PIB2 / Populacao2) : 0;

    //Início do jogo
    printf("\n***Bem-Vindo ao jogo!***\n");
    printf("Atributos disponíveis:\n");
    printf("P - População\n");
    printf("A - Área\n");
    printf("I - PIB\n");
    printf("D - Densidade Populacional\n");
    printf("T - Pontos Turísticos\n");

   // Escolha do primeiro atributo
   printf("\nEscolha o primeiro atributo:\n");
   scanf(" %c", &primeiroAtributo);
   getchar();

   // Escolha do segundo atributo (deve ser diferente do primeiro)
   printf("\nEscolha o segundo atributo (deve ser diferente do primeiro):\n");
   scanf(" %c", &segundoAtributo);
   getchar();

   if (primeiroAtributo == segundoAtributo) {
    printf("Erro! Você escolheu o mesmo atributo duas vezes.\n");
    return 1; // Encerra o programa se os atributos forem iguais
}

   // Inicializa soma dos atributos
   soma1 = soma2 = 0;

   // Comparação dos atributos
   switch (primeiroAtributo) {
       case 'P': case 'p':
           Resultado1 = (Populacao1 > Populacao2) ? 1 : 0;
           soma1 += Populacao1;
           soma2 += Populacao2;
           break;
       case 'A': case 'a':
           Resultado1 = (Area1 > Area2) ? 1 : 0;
           soma1 += (int)Area1;
           soma2 += (int)Area2;
           break;
       case 'I': case 'i':
           Resultado1 = (PIB1 > PIB2) ? 1 : 0;
           soma1 += (int)PIB1;
           soma2 += (int)PIB2;
           break;
       case 'D': case 'd':
           Resultado1 = (DensidadePopulacional1 < DensidadePopulacional2) ? 1 : 0;
           soma1 += (int)DensidadePopulacional1;
           soma2 += (int)DensidadePopulacional2;
           break;
       case 'T': case 't':
           Resultado1 = (NumerosDePontosTuristicos1 > NumerosDePontosTuristicos2) ? 1 : 0;
           soma1 += NumerosDePontosTuristicos1;
           soma2 += NumerosDePontosTuristicos2;
           break;
       default:
           printf("Atributo inválido!\n");
           return 1;
   }

   switch (segundoAtributo) {
       case 'P': 
       case 'p':
           Resultado2 = (Populacao1 > Populacao2) ? 1 : 0;
           soma1 += Populacao1;
           soma2 += Populacao2;
           break;
       case 'A': 
       case 'a':
           Resultado2 = (Area1 > Area2) ? 1 : 0;
           soma1 += (int)Area1;
           soma2 += (int)Area2;
           break;
       case 'I': 
       case 'i':
           Resultado2 = (PIB1 > PIB2) ? 1 : 0;
           soma1 += (int)PIB1;
           soma2 += (int)PIB2;
           break;
       case 'D': case 'd':
           Resultado2 = (DensidadePopulacional1 < DensidadePopulacional2) ? 1 : 0;
           soma1 += (int)DensidadePopulacional1;
           soma2 += (int)DensidadePopulacional2;
           break;
       case 'T': case 't':
           Resultado2 = (NumerosDePontosTuristicos1 > NumerosDePontosTuristicos2) ? 1 : 0;
           soma1 += NumerosDePontosTuristicos1;
           soma2 += NumerosDePontosTuristicos2;
           break;
       default:
           printf("Atributo inválido!\n");
           return 1;
   }

   // Resultado final
   printf("\n*** Resultado ***\n");
   if (soma1 > soma2)
       printf("A cidade %s venceu!\n", NomeDaCidade1);
   else if (soma1 < soma2)
       printf("A cidade %s venceu!\n", NomeDaCidade2);
   else
       printf("Empate!\n");

    return 0;
}
