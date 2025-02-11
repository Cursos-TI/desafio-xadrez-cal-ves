#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Função que recebe uma peça, um número de casas e uma direção e imprime a movimentação da peça, usando loop for para repetir a direção
void moverPecas(char peca[7], int casas, char direcao[8])
{
    printf("Peça: %s\n", peca);
    for (int i = 0; i < casas; i++)
    {
        printf("%s\n", direcao);
    }
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    moverPecas("Bispo", 5, "Direita \nCima"); // Chama a função para mover o Bispo 5 casas para a direita e para cima
    // Implementação de Movimentação da Torre
    moverPecas("Torre", 5, "Direita");        // Chama a função para mover a Torre 5 casas para a direita

    // Implementação de Movimentação da Rainha
    moverPecas("Rainha", 8, "Esquerda");      // Chama a função para mover a Rainha 8 casas para a esquerda

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
