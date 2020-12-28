//
//  board.hpp
//  Sudoku
//
//  Created by Suhan Gui
//
#include <iostream>
#include <vector>

#ifndef board_h
#define board_h

#include <stdio.h>

class Sudoku{
public:
    Sudoku();
    
    void add(int x, int y, int num);
    void print();
private:
    std::vector<std::vector<int> > board;
};

#endif /* board_h */
