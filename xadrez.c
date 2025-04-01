#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.
void moverBispo(int casas){
    if (casas > 0){
        printf("Cima, Direita\n");
        moverBispo(casas - 1);
    }
}

void moverTorre(int casas){
    if (casas > 0){
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}

void moverRainha(int casas){
    if (casas > 0){
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

void moverCavalo(int movimentos) {
    if (movimentos > 0) {
        printf("Cima\n");
        printf("Cima\n");
        printf("Direita\n");
        moverCavalo(movimentos - 1);
    }
}

int main() {

    printf("Bispo:\n");
    moverBispo(5);
    printf("\n");

    printf("Torre:\n");
    moverTorre(5);
    printf("\n");

    printf("Rainha:\n");
    moverRainha(8);
    printf("\n");

    printf("Cavalo:\n");
    moverCavalo(1);
    printf("\n");
    
    return 0;
}
