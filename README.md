# Circle Area Calculator

## Overview
A C++ program for creating, managing, and calculating areas of multiple circles with various utility methods for circle manipulation.

## Features
- Create circles with radius validation
- Calculate circle area and perimeter
- Compare circles based on radius
- Dynamic circle area storage
- Input and output operations for circles

## Prerequisites
- C++ Compiler (g++)
- Standard C++ Library

## Compilation
```bash
g++ -std=c++11 circle_area_calculator.cpp -o circle_area_calculator
```

## Usage
1. Run the compiled executable
2. Input number of circles
3. Input radii for each circle
4. Program displays areas of all circles

### Example
```
Enter number of circles: 3
Enter radius for circle 1: 2.5
Enter radius for circle 2: 3.0
Enter radius for circle 3: 1.7
Areas:
19.625
28.26
9.1206
```

## Code Structure
- `Circle` class with methods:
  - Radius setting and getting
  - Area and perimeter calculation
  - Comparison operators
- Custom input stream operator
- Dynamic area storage

## Potential Improvements
- Add error handling
- Implement more circle-related operations
- Use dynamic memory allocation
- Add const correctness

## Mathematical Constants
- Pi (π) approximated as 3.14


## Author
Salman Hashemi
