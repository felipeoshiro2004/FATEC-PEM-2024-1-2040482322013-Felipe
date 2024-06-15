#include <stdio.h>
#include "include/board.h"
#include "include/moves.h"
#include "include/display.h"

int ocupacao[8][8];
int pecas[8][8];

int main() {
    initializeBoard(ocupacao, pecas);

    printInitialBoard();

    firstMove(ocupacao, pecas);
    printBoardAfterFirstMove();

    secondMove(ocupacao, pecas);
    printBoardAfterSecondMove();

    thirdMove(ocupacao, pecas);
    printBoardAfterThirdMove();

    fourthMove(ocupacao, pecas);
    printBoardAfterFourthMove();

    return 0;
}
