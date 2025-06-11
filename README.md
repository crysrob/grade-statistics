# Grade Statistics in C++

Hello! This is a beginner-friendly C++ program that allows a user to enter multiple class grades and outputs a summary including:

- Average percentage  
- Number of passing grades (≥ 50%)  
- Their highest and lowest grades  
- Corresponding class names for best and worst grades  

The program uses loops, conditionals, functions, and string handling.

## Features

- Input validation for grade values (0–100)
- Uses a separate `printSummary()` function for clean code
- Accepts full class names using `getline()` and the string library
- while loops
- if / else

## How to Run

1. Make sure you have a C++ compiler installed (e.g. g++, clang++)
2. Compile the program:
```bash
g++ gradeSstatistics.cpp -o gradeStatistics

3. Run the program:
./grade_statistics
