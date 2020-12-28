//
//  board.hpp
//  Sudoku
//
//  Created by Suhan Gui on 12/28/20.
//
#include <iostream>
#include <vector>

#ifndef board_h
#define board_h

#include <stdio.h>

class Sudoku{
public:
    Sudoku();
private:
    std::vector< int > board;
};

#endif /* board_h */
