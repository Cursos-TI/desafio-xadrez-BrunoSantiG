#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este codigo inicial serve como base para o desenvolvimento do sistema de movimentacao das pecas de xadrez.
// O objetivo e utilizar estruturas de repeticao e funcoes para determinar os limites de movimentacao dentro do jogo.

// Funcao recursiva para movimento da Torre (5 casas para a direita)
// Caso base: quando casas_restantes for 0, para a recursao
// Caso recursivo: imprime a direcao e chama a funcao novamente com casas_restantes - 1
void moverTorreRecursivo(int casas_restantes) {
    if (casas_restantes == 0) {
        return;
    }
    printf("Direita\n");
    moverTorreRecursivo(casas_restantes - 1);
}

// Funcao recursiva para movimento do Bispo com loops aninhados
void moverBispoRecursivo(int casas_restantes) {
    if (casas_restantes == 0) {
        return;
    }
    int vertical, horizontal;
    for (vertical = 1; vertical <= 1; vertical++) {
        for (horizontal = 1; horizontal <= 1; horizontal++) {
            printf("Cima, Direita\n");
        }
    }
    moverBispoRecursivo(casas_restantes - 1);
}

// Funcao recursiva para movimento da Rainha
void moverRainhaRecursivo(int casas_restantes) {
    if (casas_restantes == 0) {
        return;
    }
    printf("Esquerda\n");
    moverRainhaRecursivo(casas_restantes - 1);
}

int main() {
    // Nivel Novato - Movimentacao das Pecas
    const int CASAS_TORRE = 5;
    const int CASAS_BISPO = 5;
    const int CASAS_RAINHA = 8;
    const int CASAS_CAVALO_VERTICAL = 2;
    const int CASAS_CAVALO_HORIZONTAL = 1;

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
    int quantidades[] = {CASAS_CAVALO_VERTICAL, CASAS_CAVALO_HORIZONTAL};
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

    // Implementacao de Movimentacao da Torre usando recursividade
    printf("\n=== MOVIMENTO DA TORRE (Recursivo) ===\n");
    printf("Movendo %d casas para a direita:\n", CASAS_TORRE);
    moverTorreRecursivo(CASAS_TORRE);

    // Implementacao de Movimentacao do Bispo usando recursividade com loops aninhados
    printf("\n=== MOVIMENTO DO BISPO (Recursivo e Loops Aninhados) ===\n");
    printf("Movendo %d casas na diagonal:\n", CASAS_BISPO);
    moverBispoRecursivo(CASAS_BISPO);

    // Implementacao de Movimentacao da Rainha usando recursividade
    printf("\n=== MOVIMENTO DA RAINHA (Recursivo) ===\n");
    printf("Movendo %d casas para a esquerda:\n", CASAS_RAINHA);
    moverRainhaRecursivo(CASAS_RAINHA);

    // Sugestao: Implemente a movimentacao do Cavalo utilizando loops com variaveis multiplas e condicoes avancadas.
    printf("\n=== MOVIMENTO DO CAVALO ===\n");
    printf("Movendo em L: duas casas para cima e uma casa para a direita:\n");
    int quantidades_cavalo[] = {CASAS_CAVALO_VERTICAL, CASAS_CAVALO_HORIZONTAL};
    char *direcoes_cavalo[] = {"Cima", "Direita"};
    int direcao_cavalo;
    for (direcao_cavalo = 0; direcao_cavalo < 2; direcao_cavalo++) {
        int casas_cavalo = 1;
        while (casas_cavalo <= quantidades_cavalo[direcao_cavalo]) {
            printf("%s\n", direcoes_cavalo[direcao_cavalo]);
            casas_cavalo++;
        }
    }

    return 0;
}