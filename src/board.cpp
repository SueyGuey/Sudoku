//
//  board.cpp
//  Sudoku
//
//  Created by Suhan Gui
//
#include <iostream>
#include "board.h"
#include <cassert>

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
            if(counter % 3 == 1){std::cout << "|";}
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

void Sudoku::solve(){
    solve(0);
}

void Sudoku::solve(int move){
    if(move == 81){
        std::cout << "Solved Puzzle:" << std::endl;
        print();
        return;
    } else {
        int x = move % 9;
        int y = move / 9;
        if(board[x][y] != 0){
            solve(move + 1); //spot filled, skip
        } else {
            for(int i = 1; i < 10; i++){
                 if(valid(x, y, i, board)){
                     board[x][y] = i;
                     solve(move + 1);
                     board[x][y] = 0; //reverse the placement
                }
            }
        }
    }
    return;
}

bool Sudoku::valid(int x, int y, int num, const std::vector<std::vector <int> >& brd){
    //row and column
    for(int i = 0; i < 9; i ++){
        if(brd[x][i] == num || brd[i][y] == num) return false;
    }
    //squares of 9
    for(int i = 0; i < 3; i ++){
        for(int j = 0; j < 3; j++){
            if(brd[x - x % 3 + i][y - y % 3 + j] == num) return false;
        }
    }
    return true;
}
