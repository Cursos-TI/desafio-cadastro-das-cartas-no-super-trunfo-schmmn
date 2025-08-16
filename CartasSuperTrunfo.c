#include <stdio.h>

struct Carta {
    char estado;                // Letra de 'A' a 'H'
    char codigo[4];             // Ex: "A01"
    char cidade[50];            // Nome da cidade
    int populacao;              // Número de habitantes
    float area;                 // Área em km²
    float pib;                  // PIB
    int pontosTuristicos;       // Número de pontos turísticos
};

int main() {
    struct Carta carta1, carta2;
    // === leituras ===
    // ===== Entrada da Carta 1 =====
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &carta1.estado);
    // leitura do codigo
    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", carta1.codigo);
    // leitura do nome da cidade
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", carta1.cidade);
    // leitura da população
    printf("Populacao: ");
    scanf("%d", &carta1.populacao);
    // leitura da area
    printf("Area (km²): ");
    scanf("%f", &carta1.area);
    // leitura do pib
    printf("PIB: ");
    scanf("%f", &carta1.pib);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // ===== Entrada da Carta 2 =====
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &carta2.estado);

    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", carta2.codigo);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", carta2.cidade);

    printf("Populacao: ");
    scanf("%d", &carta2.populacao);

    printf("Area (km²): ");
    scanf("%f", &carta2.area);

    printf("PIB: ");
    scanf("%f", &carta2.pib);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // ===== Exibindo os dados =====
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Codigo: %s\n", carta1.codigo);
    printf("Cidade: %s\n", carta1.cidade);
    printf("Populacao: %d\n", carta1.populacao);
    printf("Area: %.2f km²\n", carta1.area);
    printf("PIB: %.2f\n", carta1.pib);
    printf("Pontos Turisticos: %d\n", carta1.pontosTuristicos);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Codigo: %s\n", carta2.codigo);
    printf("Cidade: %s\n", carta2.cidade);
    printf("Populacao: %d\n", carta2.populacao);
    printf("Area: %.2f km²\n", carta2.area);
    printf("PIB: %.2f\n", carta2.pib);
    printf("Pontos Turisticos: %d\n", carta2.pontosTuristicos);

    return 0;
}
