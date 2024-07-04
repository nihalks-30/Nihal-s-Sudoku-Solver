# Sudoku Solver

## Overview

Welcome to the Sudoku Solver project! This project is designed to generate and solve Sudoku puzzles. The application is built using C++ and includes functionalities for generating a new Sudoku puzzle, displaying it, and solving it.

## Features

- **Sudoku Puzzle Generation:** Randomly generates a valid Sudoku puzzle.
- **Sudoku Solver:** Solves the generated Sudoku puzzle using a backtracking algorithm.
- **Interactive Console Output:** Displays the generated and solved Sudoku puzzles in the console.

## Getting Started

### Prerequisites

- C++ Compiler (g++, clang, etc.)
- Make (for building the project)
- VS Code (recommended for development)

### Project Structure

- SudokuSolver/
├── include/
│   └── sudoku.h
├── src/
│   └── sudoku.cpp
├── main.cpp
└── Makefile

The project consists of the following files and directories:

- `include/sudoku.h`: Header file declaring the `Sudoku` class and its methods.
- `src/sudoku.cpp`: Implementation of the `Sudoku` class.
- `main.cpp`: The entry point of the application.
- `Makefile`: For building the project.

## How to execute in VS Code

### Building the Project

1. **Clone the Repository:**

   ```sh
   git clone https://github.com/your-username/your-repo.git
   cd SudokuSolver

2. **Open the Project in VS Code:**

  ```sh
  code .
  make
  ./sudoku_solver

