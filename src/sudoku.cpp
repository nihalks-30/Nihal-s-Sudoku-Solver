#include "sudoku.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <algorithm>

Sudoku::Sudoku() {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            board[i][j] = 0;
        }
    }
}

void Sudoku::generate() {
    srand(time(nullptr)); 
    // Shuffle the numbers 1 to 9
    int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::random_shuffle(nums, nums + 9);
    // Fill the board with shuffled numbers
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            board[i][j] = nums[(i * 3 + i / 3 + j) % 9]; // Using a formula to shuffle numbers
        }
    }

    // Randomly remove numbers to create the puzzle
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            if (rand() % 2 == 0) {
                board[i][j] = 0; 
            }
        }
    }
}


bool Sudoku::isValid(int row, int col, int num) {
    // Check if num is not in current row, column and sub-grid
    int startRow = row - row % 3, startCol = col - col % 3;
    for (int x = 0; x < 9; x++) {
        if (board[row][x] == num || board[x][col] == num ||
            board[startRow + x / 3][startCol + x % 3] == num) {
            return false;
        }
    }
    return true;
}

bool Sudoku::solveSudoku() {
    for (int row = 0; row < 9; row++) {
        for (int col = 0; col < 9; col++) {
            if (board[row][col] == 0) { 
                for (int num = 1; num <= 9; num++) {
                    if (isValid(row, col, num)) {
                        board[row][col] = num; 
                        if (solveSudoku()) return true; // Recursively solve
                        board[row][col] = 0; // Backtrack
                    }
                }
                return false; 
            }
        }
    }
    return true; 
}

bool Sudoku::solve(){
    return solveSudoku();
}

void Sudoku::printBoard() {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            std::cout << board[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
