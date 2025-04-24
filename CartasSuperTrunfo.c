#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

struct CartasSuperTrunfo
{
    /* 24/04/2025 */
    char codigo [4];
    char nome_cidade [20];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
};

int main() {
   struct CartasSuperTrunfo cartaA, cartaB;

   // Cadastro da carta A
    printf("Cadastro da primeira carta (Carta A)\n");
    printf("Código (ex: A01): ");
    scanf("%s", cartaA.codigo);

    getchar(); // Limpa o \n do buffer

    printf("Nome da cidade: ");
    scanf("%19[^\n]", cartaA.nome_cidade); // Lê até 19 caracteres ou até encontrar uma nova linha
    
    printf("População: ");
    scanf("%d", &cartaA.populacao);

    printf("Área (em km²): ");
    scanf("%f", &cartaA.area);

    printf("PIB (em bilhões de dólares): ");
    scanf("%f", &cartaA.pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &cartaA.pontos_turisticos);
    
    getchar(); // Limpa o \n antes da proxima leitura de string

    // Cadastro da carta B
    printf("Cadastro da segunda carta (Carta B):\n");
    printf("Código (ex: B02): ");
    scanf("%s", cartaB.codigo);

    getchar(); // Limpa o \n do buffer

    printf("Nome da cidade: ");
    scanf(" %19[^\n]", cartaB.nome_cidade); // Lê até 19 caracteres ou até encontrar uma nova linha
    
    printf("População: ");
    scanf("%d", &cartaB.populacao);

    printf("Área (em km²): ");
    scanf("%f", &cartaB.area);

    printf("PIB (em bilhões de dólares): ");
    scanf("%f", &cartaB.pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &cartaB.pontos_turisticos);
    
    // Exibição dos dados cadastrados
    printf("Dados cadastrados:\n");

    printf("Carta A (%s - %s):\n", cartaA.codigo, cartaA.nome_cidade);
    printf("População: %d\n", cartaA.populacao);
    printf("Área: %.2f km²\n", cartaA.area);
    printf("PIB: %.2f bilhões de dólares\n", cartaA.pib);
    printf("Pontos Turísticos: %d\n", cartaA.pontos_turisticos);
    printf("\n");

    printf("Carta B (%s - %s):\n", cartaB.codigo, cartaB.nome_cidade);
    printf("População: %d\n", cartaB.populacao);
    printf("Área: %.2f km²\n", cartaB.area);
    printf("PIB: %.2f bilhões de dólares\n", cartaB.pib);
    printf("Pontos Turísticos: %d\n", cartaB.pontos_turisticos);
    return 0;
}
