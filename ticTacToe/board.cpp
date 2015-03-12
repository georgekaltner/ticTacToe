//
//  board.cpp
//  ticTacToe
//
//  Created by george kaltner on 3/4/15.
//  Copyright (c) 2015 georgeKaltner. All rights reserved.
//

#include "board.h"

Board::Board()
{
    for (int i = 0; i <=9; i++){
        ticBoard[i]=i;
    }
    
}