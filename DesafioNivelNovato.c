#include <stdio.h>

int main(){

    // Variáveis para armazenar os dados das duas cartas
    char Estado1, Estado2;
    char CodigoDaCarta1[5], CodigoDaCarta2[5];
    char NomeDaCidade1[30], NomeDaCidade2[30];
    int Populacao1, Populacao2, NumerosDePontosTuristicos1, NumerosDePontosTuristicos2;
    float Area1, Area2, PIB1, PIB2;

    // Entrada de dados para a primeira carta
    printf("--- Desafio Super Trunfo --- \n");
    printf("Digite a letra do estado (A-H) da primeira carta: ");
    scanf(" %c", &Estado1);

    printf("Digite o código da primeira carta: ");
    scanf("%s", CodigoDaCarta1);

    getchar(); // Limpa o buffer antes de ler NomeDaCidade1

    printf("Digite o nome da primeira cidade: ");
    scanf("%[^\n]s", NomeDaCidade1);

    printf("Digite o número da população da cidade: ");
    scanf("%d", &Populacao1);

    printf("Digite a área da cidade em km²: ");
    scanf("%f", &Area1);

    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &NumerosDePontosTuristicos1);

    // Entrada de dados para a segunda carta
    printf("\nDigite a letra do estado (A-H) da segunda carta: ");
    scanf(" %c", &Estado2); // Adiciona espaço antes de %c para evitar problemas

    printf("Digite o código da segunda carta (ex: B02): ");
    scanf("%s", CodigoDaCarta2);

    getchar(); // Limpa o buffer antes de ler NomeDaCidade2

    printf("Digite o nome da cidade da segunda carta: ");
    scanf("%[^\n]s", NomeDaCidade2);

    printf("Digite a população da cidade: ");
    scanf("%d", &Populacao2);

    printf("Digite a área da cidade em km²: ");
    scanf("%f", &Area2);

    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &NumerosDePontosTuristicos2);

    // Exibição dos dados cadastrados
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c \n", Estado1);
    printf("Código: %s \n", CodigoDaCarta1);
    printf("Nome da Cidade: %s \n", NomeDaCidade1);
    printf("População: %d \n", Populacao1);
    printf("Área em km²: %.2f km² \n", Area1);
    printf("PIB: %.2f bilhões de reais \n", PIB1);
    printf("Número de Pontos Turísticos: %d \n", NumerosDePontosTuristicos1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c \n", Estado2);
    printf("Código: %s \n", CodigoDaCarta2);
    printf("Nome da Cidade: %s \n", NomeDaCidade2);
    printf("População: %d \n", Populacao2);
    printf("Área em km²: %.2f km² \n", Area2);
    printf("PIB: %.2f bilhões de reais \n", PIB2);
    printf("Número de Pontos Turísticos: %d \n", NumerosDePontosTuristicos2);

    return 0;
}
