//
//  main.cpp
//  ticTacToe
//
//  Created by george kaltner on 2/20/15.
//  Copyright (c) 2015 GGames. All rights reserved.
//

#include <iostream>

using namespace std;

void board();
char switchPlayer(char Player);
bool checkWin();
bool checkMove(int playerChoice);

char ticBoard[9] = {'0','1','2','3','4','5','6','7','8'};

int main()
{
    int playerChoice;
    bool validMove;
    char currentPlayer = 'X';
    bool winner;
    
    std::cout << "player 1 = X, Player 2 = O, 91 = quit\n";
    
    while(playerChoice != 91){
        
        board();
        
        if(currentPlayer == 'X'){
            std::cout << "pick a number player " <<currentPlayer<< "\n";
        }
        else{
            std::cout << "pick a number player " <<currentPlayer<< "\n";
            
        }
        std::cin >> playerChoice;
        
        validMove = checkMove(playerChoice);
        
        if(validMove == true){
            
            ticBoard[playerChoice] = currentPlayer;
            
            if(playerChoice == 0){
                
                ticBoard[playerChoice] = currentPlayer;
            }
            
            else{
                std::cout << "NOT A VALID MOVE \n";
            }
            winner = checkWin();
            if(winner == true){
                board();
                std::cout << "player " <<currentPlayer<< " wins";
                return 0;
            }
            
            else if(ticBoard[0] != '0' && ticBoard[1] != '1' && ticBoard[2] != '2' && ticBoard[3] != '3' && ticBoard[4] != '4' &&ticBoard[5] != '5' && ticBoard[6] != '6' && ticBoard[7] != '7' && ticBoard[8] != '8'){
                board();
                std::cout << "nobody wins \n";
                return 0;
            }
            
            currentPlayer = switchPlayer(currentPlayer);
        }
        
        return 0;
    }}


void board(){
    std::cout << "     |   |     \n" ;
    std::cout <<"   "<< ticBoard[0]<< " | "<< ticBoard[1] <<" | " <<ticBoard[2]<<"\n";
    std::cout <<"  ----------- \n";
    std::cout <<"   "<< ticBoard[3]<< " | "<< ticBoard[4] <<" | " <<ticBoard[5]<<"\n";
    std::cout <<"  ----------- \n";
    std::cout <<"   "<< ticBoard[6]<< " | "<< ticBoard[7] <<" | " <<ticBoard[8]<<"\n";
    std::cout << "     |   |     \n" ;
}



char switchPlayer(char player){
    if(player == 'X'){
        
        return'O';
    }
    else{
        
        return 'X';
    }
}

bool checkMove(int playerChoice){
    if(ticBoard[playerChoice]!='X' && ticBoard[playerChoice] != 'O'){
        
        return true;
    }
    else{
        
        return false;
    }
}

bool checkWin(){
    if(ticBoard[0] == ticBoard[1] && ticBoard[1] == ticBoard[2]){
        
        return true;
    }
    
    else if(ticBoard[3] == ticBoard[4] && ticBoard[4] == ticBoard[5]){
        return  true;
    }
    
    else if(ticBoard[6] == ticBoard[7] && ticBoard[7] == ticBoard[8]){
        return true;
    }
    
    else if(ticBoard[0] == ticBoard[3] && ticBoard[3] == ticBoard[6]){
        return true;
    }
    
    else if(ticBoard[1] == ticBoard[4] && ticBoard[4] == ticBoard[7]){
        return true;
    }
    
    else if(ticBoard[2] == ticBoard[5] && ticBoard[5] == ticBoard[8]){
        return true;
    }
    
    else if(ticBoard[0] == ticBoard[4] && ticBoard[4] == ticBoard[8]){
        return true;
    }
    
    else if(ticBoard[2] == ticBoard[4] && ticBoard[4] == ticBoard[6]){
        return true;
    }
    
    else{
        return false;
    }
}

