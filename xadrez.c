#include <stdio.h>

// Função recursiva para movimentação da Torre
void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}

// Função recursiva para movimentação do Bispo
void moverBispo(int casas) {
    if (casas > 0) {
        printf("Cima Direita\n");
        moverBispo(casas - 1);
    }
}

// Função recursiva para movimentação da Rainha
void moverRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

// Função para movimentação do Cavalo com loops aninhados
void moverCavalo() {
    printf("Movimento do Cavalo (2 casas para cima e 1 para a direita):\n");
    for (int i = 0; i < 2; i++) {
        printf("Cima\n");
    }
    for (int j = 0; j < 1; j++) {
        printf("Direita\n");
    }
}

// Função para movimentação do Bispo com loops aninhados
void moverBispoLoops(int casas) {
    printf("Movimento do Bispo com loops aninhados:\n");
    for (int i = 1; i <= casas; i++) {
        for (int j = 1; j <= 1; j++) {
            printf("Cima Direita\n");
        }
    }
}

int main() {
    printf("Movimento da Torre (5 casas para a direita):\n");
    moverTorre(5);
    
    printf("\n");
    printf("Movimento do Bispo (5 casas na diagonal para cima e direita):\n");
    moverBispo(5);
    
    printf("\n");
    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    moverRainha(8);
    
    printf("\n");
    moverCavalo();
    
    printf("\n");
    moverBispoLoops(5);
    
    return 0;
}
