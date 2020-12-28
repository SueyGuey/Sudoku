//
//  board.cpp
//  Sudoku
//
//  Created by Suhan Gui
//
#include <iostream>
#include "board.h"

Sudoku::Sudoku(){
    board = std::vector<std::vector<int> >(9, std::vector<int>(9,0));
}

void Sudoku::add(int x, int y, int num){
    board[x-1][y-1] = num;
}

//formats the board
void Sudoku::print(){
    std::cout << "_______________________________" << std::endl;
    
    int counter = 1;
    for(int x = 0; x < 9; x++){
        if(counter%27 == 1){
            std::cout << "|         |         |         |" << std::endl;
        }
        
        for(int y = 0; y < 9; y++){
            if(counter%3 == 1){std::cout << "|";}
            if(board[y][x]!= 0){std::cout << " " << board[y][x] << " ";}
            else{std::cout << " * ";}
            if(counter%9 == 0){std::cout << "|";}
            
            counter++;
        }
        
        std::cout << "\n";
        
        if(counter%27 == 1 && counter != 1){
            std::cout << "|_________|_________|_________|" << std::endl;
        }
    }
}
