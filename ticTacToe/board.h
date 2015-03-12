//
//  board.h
//  ticTacToe
//
//  Created by george kaltner on 3/4/15.
//  Copyright (c) 2015 georgeKaltner. All rights reserved.
//

#ifndef __ticTacToe__board__
#define __ticTacToe__board__

#include <iostream>

#endif /* defined(__ticTacToe__board__) */

class Board
{
public:
    Board();
    void displayBoard();
    bool checkWin();
    bool setMove(int playerChoice);

private:
    char ticBoard[9];
};