#include "include/sudoku.h"
#include <iostream>
using namespace std;

int main() {
    ::cout << "Starting Nihal's Sudoku Solver...\n";
    Sudoku sudoku;
    sudoku.generate();
    ::cout << "Generated Sudoku Puzzle:" << ::endl;
    sudoku.printBoard();
    sudoku.solve();
    if (sudoku.solve()) {
        ::cout << "Solved Sudoku Puzzle:" << ::endl;
        sudoku.printBoard();
    } else {
        ::cout << "No solution exists!" << ::endl;
    }
    return 0;
}
