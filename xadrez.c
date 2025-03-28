#include <stdio.h>

/*Trabalho "Movimentação de peças de xadrez"
Nível Mestre
Aluno: Thaynara Ramos*/



// Função recursiva para o movimento da Torre (5 casas para a direita)
void movimentoTorre(int i) {
    // Parar após 5 movimentos
    if (i > 5) 
    return;
    
    printf("Movendo para a direita...\n");
    movimentoTorre(i + 1); // Chamada recursiva para mover uma casa mais
}

// Função recursiva para o movimento do Bispo (5 casas na diagonal)
void movimentoBispo(int j, int k) {
    // Parar após 5 movimentos
    if (j > 5) 
    return;
    
    // Loop aninhado para o movimento horizontal
    for (int i = 1; i <= k; i++) {
        printf("Subindo e indo pra direita...\n");
    }

    movimentoBispo(j + 1, k); // Chamada recursiva para mover uma casa mais
}

// Função recursiva para o movimento da Rainha (8 casas para a esquerda)
void movimentoRainha(int k) {
    // Parar após 8 movimentos
    if (k > 8) 
    return;

    printf("Indo pra esquerda...\n");
    movimentoRainha(k + 1); // Chamada recursiva para mover uma casa mais
}

// Função para o movimento do Cavalo (2 casas para cima e 1 para a direita)
void movimentoCavalo(int m, int n) {
    // Loop complexo para simular o movimento do Cavalo em "L"
    if (m > 2) 
    return; // Para quando atingir 2 movimentos para cima
    printf("Cima\n");
    movimentoCavalo(m + 1, n); // Chamada recursiva para o movimento para cima

    if (n > 1) 
    return; // Para quando atingir 1 movimento para a direita
    printf("Direita\n");
    movimentoCavalo(m, n + 1); // Chamada recursiva para o movimento para a direita
}

int main() {
    // Movimento da Torre
    printf("Movimento da Torre:\n");
    movimentoTorre(1); // Começa com 1 movimento
    printf("\n");

    // Movimento do Bispo
    printf("Movimento do Bispo:\n");
    movimentoBispo(1, 1); // Começa com 1 movimento e 1 para a direita
    printf("\n");

    // Movimento da Rainha
    printf("Movimento da Rainha:\n");
    movimentoRainha(1); // Começa com 1 movimento
    printf("\n");

    // Movimento do Cavalo
    printf("Movimento do Cavalo:\n");
    movimentoCavalo(1, 1); // Começa com 1 movimento para cima e 1 para a direita
    printf("\n");

    return 0;
}
