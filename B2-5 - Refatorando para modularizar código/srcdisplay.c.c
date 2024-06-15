#include "display.h"
#include <stdio.h>

void printInitialBoard() {
    printf("Tabuleiro\n\n");
    printf("8 PT1 PC1 PB1 PD1 PR1 PB2 PC2 PT2\n");
    printf("7 PP1 PP2 PP3 PP4 PP5 PP6 PP7 PP8\n");
    printf("6 XXX XXX XXX XXX XXX XXX XXX XXX\n");
    printf("5 XXX XXX XXX XXX XXX XXX XXX XXX\n");
    printf("4 XXX XXX XXX XXX XXX XXX XXX XXX\n");
    printf("3 XXX XXX XXX XXX XXX XXX XXX XXX\n");
    printf("2 BP1 BP2 BP3 BP4 BP5 BP6 BP7 BP8\n");
    printf("1 BT1 BC1 BB1 BD1 BR1 BB2 BC2 BT2\n");
    printf("   a   b   c   d   e   f   g   h \n\n");
}

void printBoardAfterFirstMove() {
    printf("8 PT1 PC1 PB1 PD1 PR1 PB2 PC2 PT2\n");
    printf("7 PP1 PP2 PP3 PP4 --- PP6 PP7 PP8\n");
    printf("6 XXX XXX XXX XXX XXX XXX XXX XXX\n");
    printf("5 XXX XXX XXX XXX PP5 XXX XXX XXX\n");
    printf("4 XXX XXX XXX XXX PB5 XXX XXX XXX\n");
    printf("3 XXX XXX XXX XXX XXX XXX XXX XXX\n");
    printf("2 BP1 BP2 BP3 BP4 --- BP6 BP7 BP8\n");
    printf("1 BT1 BC1 BB1 BD1 BR1 BB2 BC2 BT2\n");
    printf("   a   b   c   d   e   f   g   h \n\n");
}

void printBoardAfterSecondMove() {
    printf("8 PT1 --- PB1 PD1 PR1 PB2 PC2 PT2\n");
    printf("7 PP1 PP2 PP3 PP4 --- PP6 PP7 PP8\n");
    printf("6 XXX XXX PC2 XXX XXX XXX XXX XXX\n");
    printf("5 XXX XXX XXX XXX PP5 XXX XXX XXX\n");
    printf("4 XXX XXX BB2 XXX PB5 XXX XXX XXX\n");
    printf("3 XXX XXX XXX XXX XXX XXX XXX XXX\n");
    printf("2 BP1 BP2 BP3 BP4 --- BP6 BP7 BP8\n");
    printf("1 BT1 BC1 BB1 BD1 BR1 --- BC2 BT2\n");
    printf("   a   b   c   d   e   f   g   h \n\n");
}

void printBoardAfterThirdMove() {
    printf("8 PT1 --- PB1 PD1 PR1 PB2 --- PT2\n");
    printf("7 PP1 PP2 PP3 PP4 --- PP6 PP7 PP8\n");
    printf("6 XXX XXX PC2 XXX XXX PC2 XXX XXX\n");
    printf("5 XXX XXX XXX XXX PP5 XXX XXX BD1\n");
    printf("4 XXX XXX BB2 XXX PB5 XXX XXX XXX\n");
    printf("3 XXX XXX XXX XXX XXX XXX XXX XXX\n");
    printf("2 BP1 BP2 BP3 BP4 --- BP6 BP7 BP8\n");
    printf("1 BT1 BC1 BB1 --- BR1 --- BC2 BT2\n");
    printf("   a   b   c   d   e   f   g   h \n\n");
}

void printBoardAfterFourthMove() {
    printf("8 PT1 --- PB1 PD1 PR1 PB2 --- PT2\n");
    printf("7 PP1 PP2 PP3 PP4 --- BD1 PP7 PP8\n");
    printf("6 XXX XXX PC2 XXX XXX PC2 XXX XXX\n");
    printf("5 XXX XXX XXX XXX PP5 XXX XXX ---\n");
    printf("4 XXX XXX BB2 XXX PB5 XXX XXX XXX\n");
    printf("3 XXX XXX XXX XXX XXX XXX XXX XXX\n");
    printf("2 BP1 BP2 BP3 BP4 --- BP6 BP7 BP8\n");
    printf("1 BT1 BC1 BB1 --- BR1 --- BC2 BT2\n");
    printf("   a   b   c   d   e   f   g   h \n\n");
}
