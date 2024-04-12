#include <stdio.h>
#define preta 1
#define branca 2
#define rei 0
#define dama 1
#define torre 2
#define bispo 3
#define cavalo 4
#define peao 5

int ocupacao[8][8];
int pecas[8][8];

int valores[] = {1, 9, 5, 3, 3, 1};
int main (){


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
    
    printf("===========Primeira jogada==========\n\n");
    printf("Brancas jogam e4\n");
    printf("Pretas jogam e5\n\n");
    printf("8 PT1 PC1 PB1 PD1 PR1 PB2 PC2 PT2\n");
    printf("7 PP1 PP2 PP3 PP4 --- PP6 PP7 PP8\n");
    printf("6 XXX XXX XXX XXX XXX XXX XXX XXX\n");
    printf("5 XXX XXX XXX XXX PP5 XXX XXX XXX\n");
    printf("4 XXX XXX XXX XXX PB5 XXX XXX XXX\n");
    printf("3 XXX XXX XXX XXX XXX XXX XXX XXX\n");
    printf("2 BP1 BP2 BP3 BP4 --- BP6 BP7 BP8\n");
    printf("1 BT1 BC1 BB1 BD1 BR1 BB2 BC2 BT2\n");
    printf("   a   b   c   d   e   f   g   h \n\n");
    
    printf("===========Segunda jogada ==========\n\n");
    printf("Brancas jogam bc4\n");
    printf("Pretas jogam Cc6\n\n");
    printf("8 PT1 --- PB1 PD1 PR1 PB2 PC2 PT2\n");
    printf("7 PP1 PP2 PP3 PP4 --- PP6 PP7 PP8\n");
    printf("6 XXX XXX PC2 XXX XXX XXX XXX XXX\n");
    printf("5 XXX XXX XXX XXX PP5 XXX XXX XXX\n");
    printf("4 XXX XXX BB2 XXX PB5 XXX XXX XXX\n");
    printf("3 XXX XXX XXX XXX XXX XXX XXX XXX\n");
    printf("2 BP1 BP2 BP3 BP4 --- BP6 BP7 BP8\n");
    printf("1 BT1 BC1 BB1 BD1 BR1 --- BC2 BT2\n");
    printf("   a   b   c   d   e   f   g   h \n\n");
    
    printf("===========Terceira jogada==========\n\n");
    printf("Brancas jogam Dh5\n");
    printf("Pretas jogam Cf6\n\n");
    printf("8 PT1 --- PB1 PD1 PR1 PB2 --- PT2\n");
    printf("7 PP1 PP2 PP3 PP4 --- PP6 PP7 PP8\n");
    printf("6 XXX XXX PC2 XXX XXX PC2 XXX XXX\n");
    printf("5 XXX XXX XXX XXX PP5 XXX XXX BD1\n");
    printf("4 XXX XXX BB2 XXX PB5 XXX XXX XXX\n");
    printf("3 XXX XXX XXX XXX XXX XXX XXX XXX\n");
    printf("2 BP1 BP2 BP3 BP4 --- BP6 BP7 BP8\n");
    printf("1 BT1 BC1 BB1 --- BR1 --- BC2 BT2\n");
    printf("   a   b   c   d   e   f   g   h \n\n");
    
    printf("=====Quarta Jogada (Xeque Mate)=====\n\n");
    printf("Brancas captturam peão PP6 em f7 e xeque Mate\n\n");
    printf("8 PT1 --- PB1 PD1 PR1 PB2 --- PT2\n");
    printf("7 PP1 PP2 PP3 PP4 --- BD1 PP7 PP8\n");
    printf("6 XXX XXX PC2 XXX XXX PC2 XXX XXX\n");
    printf("5 XXX XXX XXX XXX PP5 XXX XXX ---\n");
    printf("4 XXX XXX BB2 XXX PB5 XXX XXX XXX\n");
    printf("3 XXX XXX XXX XXX XXX XXX XXX XXX\n");
    printf("2 BP1 BP2 BP3 BP4 --- BP6 BP7 BP8\n");
    printf("1 BT1 BC1 BB1 --- BR1 --- BC2 BT2\n");
    printf("   a   b   c   d   e   f   g   h \n\n");
    
    return 0;
}




               