#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este codigo inicial serve como base para o desenvolvimento do sistema de movimentacao das pecas de xadrez.
// O objetivo e utilizar estruturas de repeticao e funcoes para determinar os limites de movimentacao dentro do jogo.

int main() {
    // Nivel Novato - Movimentacao das Pecas
    const int CASAS_TORRE = 5;
    const int CASAS_BISPO = 5;
    const int CASAS_RAINHA = 8;
    const int CASAS_CAVALO_BAIXO = 2;
    const int CASAS_CAVALO_ESQUERDA = 1;

    // Implementacao de Movimentacao do Bispo
    printf("\n=== MOVIMENTO DO BISPO ===\n");
    printf("Movendo %d casas na diagonal:\n", CASAS_BISPO);
    int casa_bispo = 1;
    while (casa_bispo <= CASAS_BISPO) {
        printf("Cima, Direita\n");
        casa_bispo++;
    }

    // Implementacao de Movimentacao da Torre
    printf("\n=== MOVIMENTO DA TORRE ===\n");
    printf("Movendo %d casas para a direita:\n", CASAS_TORRE);
    int casa_torre;
    for (casa_torre = 1; casa_torre <= CASAS_TORRE; casa_torre++) {
        printf("Direita\n");
    }

    // Implementacao de Movimentacao da Rainha
    printf("\n=== MOVIMENTO DA RAINHA ===\n");
    printf("Movendo %d casas para a esquerda:\n", CASAS_RAINHA);
    int casa_rainha = 1;
    do {
        printf("Esquerda\n");
        casa_rainha++;
    } while (casa_rainha <= CASAS_RAINHA);

    // Nivel Aventureiro - Movimentacao do Cavalo
    printf("\n=== MOVIMENTO DO CAVALO ===\n");
    printf("Movendo em L: duas casas para baixo e uma casa para a esquerda:\n");
    int quantidades[] = {CASAS_CAVALO_BAIXO, CASAS_CAVALO_ESQUERDA};
    char *direcoes[] = {"Baixo", "Esquerda"};
    int direcao;
    for (direcao = 0; direcao < 2; direcao++) {
        int casas = 1;
        while (casas <= quantidades[direcao]) {
            printf("%s\n", direcoes[direcao]);
            casas++;
        }
    }

    // Nivel Mestre - Funcoes Recursivas e Loops Aninhados
    // Sugestao: Substitua as movimentacoes das pecas por funcoes recursivas.
    // Exemplo: Crie uma funcao recursiva para o movimento do Bispo.

    // Sugestao: Implemente a movimentacao do Cavalo utilizando loops com variaveis multiplas e condicoes avancadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}