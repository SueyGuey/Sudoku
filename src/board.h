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
    bool valid(int x, int y, int num);
    
    void solve();
    void add(int x, int y, int num);
    void print();
private:
    std::vector<std::vector<int> > board;
    
    //bool valid(int x, int y, int num);
    void addSet(int x, int y, int num);
    
    //memory intensive but saves on time complexity
    std::unordered_set<int> clump1;
    std::unordered_set<int> clump2;
    std::unordered_set<int> clump3;
    std::unordered_set<int> clump4;
    std::unordered_set<int> clump5;
    std::unordered_set<int> clump6;
    std::unordered_set<int> clump7;
    std::unordered_set<int> clump8;
    std::unordered_set<int> clump9;
    
    std::unordered_set<int> row1;
    std::unordered_set<int> row2;
    std::unordered_set<int> row3;
    std::unordered_set<int> row4;
    std::unordered_set<int> row5;
    std::unordered_set<int> row6;
    std::unordered_set<int> row7;
    std::unordered_set<int> row8;
    std::unordered_set<int> row9;
    
    std::unordered_set<int> column1;
    std::unordered_set<int> column2;
    std::unordered_set<int> column3;
    std::unordered_set<int> column4;
    std::unordered_set<int> column5;
    std::unordered_set<int> column6;
    std::unordered_set<int> column7;
    std::unordered_set<int> column8;
    std::unordered_set<int> column9;
};

#endif /* board_h */
