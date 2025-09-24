#include <stdio.h>

int main() {
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
    int casasBaixoCavalo = 2;
    int casasEsquerdaCavalo = 1;
    int i, j;

    printf("=== Movimento da Torre ===\n");
    for (i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\n=== Movimento do Bispo ===\n");
    i = 1;
    while (i <= casasBispo) {
        printf("Cima, Direita\n");
        i++;
    }

    printf("\n=== Movimento da Rainha ===\n");
    i = 1;
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= casasRainha);

    printf("\n=== Movimento do Cavalo ===\n");
    for (i = 1; i <= casasBaixoCavalo; i++) {
        j = 1;
        while (j <= 1) {
            printf("Baixo\n");
            j++;
        }
    }
    for (i = 1; i <= casasEsquerdaCavalo; i++) {
        printf("Esquerda\n");
    }

    return 0;
}
