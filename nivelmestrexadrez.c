#include <stdio.h>

void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

void moverBispoRecursivo(int casas) {
    if (casas == 0) return;
    printf("Cima, Direita\n");
    moverBispoRecursivo(casas - 1);
}

void moverBispoLoops(int casas) {
    for (int i = 1; i <= casas; i++) {
        for (int j = 1; j <= 1; j++) {
            printf("Cima, Direita\n");
        }
    }
}

void moverCavalo() {
    int movimentosVerticais = 2;
    int movimentosHorizontais = 1;

    for (int i = 1, j = 1; i <= movimentosVerticais || j <= movimentosHorizontais; ) {
        if (i <= movimentosVerticais) {
            printf("Cima\n");
            i++;
            if (i > movimentosVerticais && j <= movimentosHorizontais) {
                continue; 
            }
        }
        if (j <= movimentosHorizontais) {
            printf("Direita\n");
            j++;
        }
        if (i > movimentosVerticais && j > movimentosHorizontais) {
            break;
        }
    }
}

int main() {
    int casasTorre = 5;
    int cas
