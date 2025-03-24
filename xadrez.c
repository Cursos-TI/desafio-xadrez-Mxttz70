#include <stdio.h>

int main() {
    // Definindo o número de casas a serem movidas
    const int casas_torre = 5;
    const int casas_bispo = 5;
    const int casas_rainha = 8;

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

    return 0;
}