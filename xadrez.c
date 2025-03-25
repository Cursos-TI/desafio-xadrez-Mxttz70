#include <stdio.h>

int main() {
    // Definindo o número de casas a serem movidas
    const int casas_torre = 5;
    const int casas_bispo = 5;
    const int casas_rainha = 8;
    const int movimentos_cavalo = 1; // O Cavalo fará um movimento "L"

    // Movimento da Torre: 5 casas para a direita
    printf("Movimento da Torre:\n");
    for (int i = 0; i < casas_torre; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo: 5 casas na diagonal (Cima, Direita)
    printf("\nMovimento do Bispo:\n");
    int j = 0;
    while (j < casas_bispo) {
        printf("Cima, Direita\n");
        j++;
    }

    // Movimento da Rainha: 8 casas para a esquerda
    printf("\nMovimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < casas_rainha);

    // Movimento do Cavalo: 2 casas para baixo e 1 casa para a esquerda
    printf("\nMovimento do Cavalo:\n");
    for (int i = 0; i < movimentos_cavalo; i++) {
        // Movimento para baixo
        for (int m = 0; m < 2; m++) {
            printf("Baixo\n");
        }
        // Movimento para a esquerda
        printf("Esquerda\n");
    }

    return 0;
}