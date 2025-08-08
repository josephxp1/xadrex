#include <stdio.h>

int main() {
    // ----------- TORRE (usando FOR) -----------
    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    // ----------- BISPO (usando WHILE) -----------
    int casasBispo = 5;
    int contadorBispo = 1;

    printf("\nMovimento do Bispo:\n");
    while (contadorBispo <= casasBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    // ----------- RAINHA (usando DO-WHILE) -----------
    int casasRainha = 8;
    int contadorRainha = 1;

    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= casasRainha);

    // ----------- CAVALO (usando FOR + WHILE) -----------
    printf("\nMovimento do Cavalo:\n");

    int movimentosL = 1;  // Número de movimentos em L
    for (int i = 0; i < movimentosL; i++) {
        // Duas casas para baixo
        int passosBaixo = 0;
        while (passosBaixo < 2) {
            printf("Baixo\n");
            passosBaixo++;
        }

        // Uma casa para a esquerda
        printf("Esquerda\n");
    }

    return 0;
}
