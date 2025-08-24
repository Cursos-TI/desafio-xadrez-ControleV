#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    short int bispo_mov = 5;
    short int torre_mov = 7;
    short int rainha_mov = 3;
    short int i = 0;


    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("*** Movimentação do BISPO ***\n");
    for (i < bispo_mov; i < 5; i++){
        printf("Bispo move para a esquerda...\n");
        printf("Bispo se move para cima.\n");
    }

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("\n*** Movimentação da TORRE ***\n");
    i = 0;
    do {
        printf("Torre se move para a direita.\n");
        i++;

    } while (i < torre_mov);

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("\n*** Movimentação da RAINHA ***\n");
    i = 0;
    while (i < rainha_mov){
        printf("Rainha se move para a esquerda.\n");
        i++;
    }

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("\n*** Movimentação do cavalo ***\n");
    int movimentoCompleto = 1;
    while (movimentoCompleto--){
        for (i = 0; i < 2; i++) {
            printf("Cima\n");
        }
        printf("Direita\n");
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
