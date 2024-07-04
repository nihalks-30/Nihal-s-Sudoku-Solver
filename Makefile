# Makefile for Sudoku Solver Project
CXX = g++
CXXFLAGS = -Iinclude -std=c++11
TARGET = sudoku_solver

SRCS = main.cpp src/sudoku.cpp
OBJS = $(SRCS:.cpp=.o)

$(TARGET): $(OBJS)
	$(CXX) -o $(TARGET) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(TARGET) $(OBJS)
