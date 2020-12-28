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

void Sudoku::print(){
    
}
