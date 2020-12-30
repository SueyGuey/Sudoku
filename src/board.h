//
//  board.hpp
//  Sudoku
//
//  Created by Suhan Gui
//
#include <iostream>
#include <vector>
#include <unordered_set>

#ifndef board_h
#define board_h

#include <stdio.h>

class Sudoku{
public:
    Sudoku();
    
    void solve();
    void add(int x, int y, int num);
    void print();
private:
    std::vector<std::vector<int> > board;
    
    bool valid(int x, int y, int num, const std::vector<std::vector <int> >& brd);
    void solve(int move);
};

#endif /* board_h */
