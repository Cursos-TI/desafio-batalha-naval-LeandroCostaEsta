#include <stdio.h>

#define TAMANHO_TABULEIRO 10
#define TAMANHO_NAVIO_VERTICAL 4
#define TAMANHO_NAVIO_HORIZONTAL 3

int main() {
    // Tabela com 10x10, mas usaremos apenas para referência
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO] = {0};

    // Posição inicial do navio vertical (linha, coluna)
    int linha_inicio_vertical = 2;
    int coluna_vertical = 5;

    // Posição inicial do navio horizontal (linha, coluna)
    int linha_horizontal = 7;
    int coluna_inicio_horizontal = 3;

    printf("Coordenadas do Navio Vertical:\n");
    for(int i = 0; i < TAMANHO_NAVIO_VERTICAL; i++) {
        int linha = linha_inicio_vertical + i;
        printf("(%d, %d)\n", linha, coluna_vertical);
        tabuleiro[linha][coluna_vertical] = 1; // marca navio vertical no tabuleiro
    }

    printf("\nCoordenadas do Navio Horizontal:\n");
    for(int j = 0; j < TAMANHO_NAVIO_HORIZONTAL; j++) {
        int coluna = coluna_inicio_horizontal + j;
        printf("(%d, %d)\n", linha_horizontal, coluna);
        tabuleiro[linha_horizontal][coluna] = 2; // marca navio horizontal no tabuleiro
    }

    return 0;
}
