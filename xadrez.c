#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    
    int bispo = 5, torre = 5, rainha = 8;
    int b = 1, t = 1, r, c = 1;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    printf("Bispo\n");
    while (b <= bispo) {
        printf("Cima, Direita\n");
        b++;
    }
    
    printf("\n");

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    
    printf("Torre\n");
    do {
        printf("Direita\n");
        t++;
    } while (t <= torre);
    
    printf("\n");

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    printf("Rainha\n");
    for (r = 1; r <= rainha; r++) {
        printf("Esquerda\n");
    }

    printf("\n");

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    printf("Cavalo\n");
    while(c > 0){
        for (int cc = 0; cc < 2; cc++){
            printf("Baixo\n");
        }
        printf("Esquerda\n");
        c--;
    }

    printf("\n");

    return 0;
}
