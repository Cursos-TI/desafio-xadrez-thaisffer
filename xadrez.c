#include <stdio.h>

#include <stdio.h>

int main() {
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    int i; 

    printf("=== Movimento da Torre ===\n");
    for (i = 1; i <= casasTorre; i++) {
        printf("Direita (%d casa)\n", i);
    }

    printf("\n=== Movimento do Bispo ===\n");
    i = 1; // reinicia o contador
    while (i <= casasBispo) {
        printf("Cima, Direita (%d casa)\n", i);
        i++;
    }

    
    printf("\n=== Movimento da Rainha ===\n");
    i = 1; 
    do {
        printf("Esquerda (%d casa)\n", i);
        i++;
    } while (i <= casasRainha);

    return 0;
}
