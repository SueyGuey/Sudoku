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
    addSet(x, y, num);
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

void Sudoku::solve(){
    
}

bool Sudoku::valid(int x, int y, int num){
    switch(x){
        case(1): if(column1.find(num) != column1.end()) return false;
            break;
        case(2): if(column2.find(num) != column1.end()) return false;
            break;
        case(3): if(column3.find(num) != column1.end()){
            std::cout << "NO" << std::endl;
            return false;}
            break;
        case(4): if(column4.find(num) != column1.end()) return false;
            break;
        case(5): if(column5.find(num) != column1.end()) return false;
            break;
        case(6): if(column6.find(num) != column1.end()) return false;
            break;
        case(7): if(column7.find(num) != column1.end()) return false;
            break;
        case(8): if(column8.find(num) != column1.end()) return false;
            break;
        case(9): if(column8.find(num) != column1.end()) return false;
            break;
        default: std::cerr << "Larger than 9" << std::endl;
    }
    
    switch(y){
        case(1): if(row1.find(num) != row1.end()) return false;
            break;
        case(2): if(row2.find(num) != row1.end()) return false;
            break;
        case(3): if(row3.find(num) != row1.end()) return false;
            break;
        case(4): if(row4.find(num) != row1.end()) return false;
            break;
        case(5): if(row5.find(num) != row1.end()) return false;
            break;
        case(6): if(row6.find(num) != row1.end()) return false;
            break;
        case(7): if(row7.find(num) != row1.end()) return false;
            break;
        case(8): if(row8.find(num) != row1.end()) return false;
            break;
        case(9): if(row8.find(num) != row1.end()) return false;
            break;
        default: std::cerr << "Larger than 9" << std::endl;
    }
    
    if(x < 4 && y < 4){
        if(clump1.find(num) != clump1.end()) return false;
    } else if(x < 7 && y < 4){
        if(clump2.find(num) != clump1.end()) return false;
    } else if(x < 4 && y < 7){
        if(clump4.find(num) != clump1.end()) return false;
    } else if(x < 7 && y < 7){
        if(clump5.find(num) != clump1.end()) return false;
    } else if(y < 4){
        if(clump3.find(num) != clump1.end()) return false;
    } else if(y < 7){
        if(clump6.find(num) != clump1.end()) return false;
    } else if(x < 4){
        if(clump7.find(num) != clump1.end()) return false;
    } else if(x < 7){
        if(clump8.find(num) != clump1.end()) return false;
    } else{
        if(clump9.find(num) != clump1.end()) return false;
    }
    
    return true;
}

void Sudoku::addSet(int x, int y, int num){
    switch(x){
        case(1): column1.insert(num);
            break;
        case(2): column2.insert(num);
            break;
        case(3): column3.insert(num);
            std::cout << num << std::endl;
            break;
        case(4): column4.insert(num);
            break;
        case(5): column5.insert(num);
            break;
        case(6): column6.insert(num);
            break;
        case(7): column7.insert(num);
            break;
        case(8): column8.insert(num);
            break;
        case(9): column9.insert(num);
            break;
        default: std::cerr << "Larger than 9" << std::endl;
    }
    
    switch(y){
        case(1): row1.insert(num);
            break;
        case(2): row2.insert(num);
            break;
        case(3): row3.insert(num);
            break;
        case(4): row4.insert(num);
            break;
        case(5): row5.insert(num);
            break;
        case(6): row6.insert(num);
            break;
        case(7): row7.insert(num);
            break;
        case(8): row8.insert(num);
            break;
        case(9): row9.insert(num);
            break;
        default: std::cerr << "Larger than 9" << std::endl;
    }
    
    if(x < 4 && y < 4){
        clump1.insert(num);
    } else if(x < 7 && y < 4){
        clump2.insert(num);
    } else if(x < 4 && y < 7){
        clump4.insert(num);
    } else if(x < 7 && y < 7){
        clump5.insert(num);
    } else if(y < 4){
        clump3.insert(num);
    } else if(y < 7){
        clump6.insert(num);
    } else if(x < 4){
        clump7.insert(num);
    } else if(x < 7){
        clump8.insert(num);
    } else{
        clump9.insert(num);
    }
}
