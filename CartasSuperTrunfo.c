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
    float densidade_populacional; // Novo atributo
    float pib_per_capita; // Novo atributo
    float super_poder; // Novo campo para o Super Poder

};

int main() {
   struct CartasSuperTrunfo cartaA, cartaB;
   int resultado_populacao, resultado_area, resultado_pib, resultado_pontos_turisticos, resultado_densidade, resultado_pib_per_capita, resultado_super_poder;

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

    // Cálculo dos novos atributos para Carta A
    cartaA.densidade_populacional = cartaA.populacao / cartaA.area;
    cartaA.pib_per_capita = cartaA.pib / cartaA.populacao;

    // Cálculo dos novos atributos para Carta B
    cartaB.densidade_populacional = cartaB.populacao / cartaB.area;
    cartaB.pib_per_capita = cartaB.pib / cartaB.populacao;

    // Cálculo do Super Poder de cada carta
    cartaA.super_poder = cartaA.populacao + cartaA.area + cartaA.pib + cartaA.pontos_turisticos + (1.0 / cartaA.densidade_populacional) + cartaA.pib_per_capita;
    cartaB.super_poder = cartaB.populacao + cartaB.area + cartaB.pib + cartaB.pontos_turisticos + (1.0 / cartaB.densidade_populacional) + cartaB.pib_per_capita;

    // Comparações
    resultado_populacao = (cartaA.populacao > cartaB.populacao) ? 1 : 0;
    resultado_area = (cartaA.area > cartaB.area) ? 1 : 0;
    resultado_pib = (cartaA.pib > cartaB.pib) ? 1 : 0;
    resultado_pontos_turisticos = (cartaA.pontos_turisticos > cartaB.pontos_turisticos) ? 1 : 0;
    resultado_densidade = (cartaA.densidade_populacional < cartaB.densidade_populacional) ? 1 : 0; // MENOR vence aqui!
    resultado_pib_per_capita = (cartaA.pib_per_capita > cartaB.pib_per_capita) ? 1 : 0;
    resultado_super_poder = (cartaA.super_poder > cartaB.super_poder) ? 1 : 0;

    // Exibição dos dados cadastrados
    printf("\nDados cadastrados:\n");

    printf("Carta A (%s - %s):\n", cartaA.codigo, cartaA.nome_cidade);
    printf("População: %lu\n", cartaA.populacao);
    printf("Área: %.2f km²\n", cartaA.area);
    printf("PIB: %.2f bilhões de dólares\n", cartaA.pib);
    printf("Pontos Turísticos: %d\n", cartaA.pontos_turisticos);
    printf("Densidade Populacional: %.2f habitantes/km²\n", cartaA.densidade_populacional);
    printf("PIB per Capita: %.8f bilhões de dólares por habitante\n", cartaA.pib_per_capita);
    printf("Super Poder: %.2f\n", cartaA.super_poder);
    printf("\n");

    printf("Carta B (%s - %s):\n", cartaB.codigo, cartaB.nome_cidade);
    printf("População: %lu\n", cartaB.populacao);
    printf("Área: %.2f km²\n", cartaB.area);
    printf("PIB: %.2f bilhões de dólares\n", cartaB.pib);
    printf("Pontos Turísticos: %d\n", cartaB.pontos_turisticos);
    printf("Densidade Populacional: %.2f habitantes/km²\n", cartaB.densidade_populacional);
    printf("PIB per Capita: %.8f bilhões de dólares por habitante\n", cartaB.pib_per_capita);
    printf("Super Poder: %.2f\n", cartaB.super_poder);

    // Exibição das comparações
    printf("\nResultados das Comparações:\n");
    printf("População: %d\n", resultado_populacao);
    printf("Área: %d\n", resultado_area);
    printf("PIB: %d\n", resultado_pib);
    printf("Pontos Turísticos: %d\n", resultado_pontos_turisticos);
    printf("Densidade Populacional: %d\n", resultado_densidade);
    printf("PIB per Capita: %d\n", resultado_pib_per_capita);
    printf("Super Poder: %d\n", resultado_super_poder);
    
    return 0;
}
