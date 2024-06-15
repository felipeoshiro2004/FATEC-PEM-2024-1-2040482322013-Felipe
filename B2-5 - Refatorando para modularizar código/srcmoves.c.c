#include "moves.h"
#include <stdio.h>

void firstMove(int ocupacao[8][8], int pecas[8][8]) {
    printf("===========Primeira jogada==========\n\n");
    printf("Brancas jogam e4\n");
    printf("Pretas jogam e5\n\n");
}

void secondMove(int ocupacao[8][8], int pecas[8][8]) {
    printf("===========Segunda jogada ==========\n\n");
    printf("Brancas jogam bc4\n");
    printf("Pretas jogam Cc6\n\n");
}

void thirdMove(int ocupacao[8][8], int pecas[8][8]) {
    printf("===========Terceira jogada==========\n\n");
    printf("Brancas jogam Dh5\n");
    printf("Pretas jogam Cf6\n\n");
}

void fourthMove(int ocupacao[8][8], int pecas[8][8]) {
    printf("=====Quarta Jogada (Xeque Mate)=====\n\n");
    printf("Brancas capturam peão PP6 em f7 e xeque mate\n\n");
}
