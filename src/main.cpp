//
//  main.cpp
//  Sudoku
//
//  Created by Suhan Gui
//

#include <iostream>
#include <fstream>
#include <string>

#include "board.h"

void ReadFile(Sudoku& puzzle, std::ifstream& File){
    std::string x, y, nums;
    
    while(File >> x >> y >> nums){ //adds num to puzzle
        int cx, cy, cnum;
        cx = std::stoi(x);
        cy = std::stoi(y);
        cnum = std::stoi(nums);
        
        puzzle.add(cx, cy, cnum);
    }
    
    std::cout << "Unsolved Puzzle:" <<std::endl;
    puzzle.print();
}

int main(int argc, const char * argv[]) {
    std::ifstream file(argv[1]);
    Sudoku puzzle;
    
    ReadFile(puzzle, file);
    puzzle.solve();
    
    return 0;
}
