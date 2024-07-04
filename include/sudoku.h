#ifndef SUDOKU_H
#define SUDOKU_H

class Sudoku {
public:
    Sudoku();
    void generate(); 
    bool solve();   
    void printBoard(); 

private:
    bool isValid(int row, int col, int num); 
    bool solveSudoku(); 
    int board[9][9];    
};

#endif
