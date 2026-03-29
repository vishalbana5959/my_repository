# Scientific Calculator

## Overview
A comprehensive command-line scientific calculator written in C that performs basic arithmetic operations, advanced mathematical functions, and solves equations. All operations are automatically logged to a history file for reference.

## Table of Contents
- [Features](#features)
  - [Basic Arithmetic Operations](#basic-arithmetic-operations)
  - [Advanced Mathematical Functions](#advanced-mathematical-functions)
  - [Trigonometric Functions](#trigonometric-functions-t)
  - [Equation Solver](#equation-solver)
- [How to Use](#how-to-use)
- [Operation Examples](#operation-examples)
- [History File](#history-file)
- [Input Validation](#input-validation)
- [Exit](#exit)
- [Libraries Used](#libraries-used)
- [Requirements](#requirements)
- [Notes](#notes)

## Features

### Basic Arithmetic Operations
- **Addition** (+): Add two numbers
- **Subtraction** (-): Subtract two numbers  
- **Multiplication** (*): Multiply two numbers
- **Division** (/): Divide two numbers (with validation for division by zero)

### Advanced Mathematical Functions
- **Power** (^): Calculate power of a number (base^exponent)
- **Square Root** (q): Find the square root of a number (with validation for negative numbers)
- **Factorial** (!): Calculate factorial of a number
- **Logarithm** (l): Calculate logarithmic values with custom base

### Trigonometric Functions (t)
Calculate trigonometric ratios for an angle given in degrees:
- Sine
- Cosine
- Tangent
- Cosecant
- Secant
- Cotangent

### Equation Solver
- **Linear Equations** (e): Solve system of linear equations with 2 or 3 variables using Cramer's rule
- **Quadratic Equations** ($): Solve quadratic equations (ax² + bx + c = 0)

## How to Use

### Compilation
```bash
gcc ScientificCalculator.c -o calculator -lm
```

### Running the Program
```bash
./calculator
```

### Menu Operations
Once the program starts, you'll see the following menu:

```
enter + for addition
enter - for subtraction
enter * for multiplication
enter / for division
enter ^ for power operation
enter q to find the squareroot of given number
enter ! to find factorial
enter t to find the value of trigo ratio
enter l for logarithm function
enter e to solve linear equation
enter $ to solve quadratic equation
enter @ if you want to quit these program
```

Enter the corresponding character and follow the prompts to enter the required values.

## Operation Examples

### Addition
```
enter the operation you want to do : +
enter the numbers you want to add
enter the first number : 10
enter the second number : 20
the sum of two numbers is 30.000000
```

### Trigonometric Function
```
enter the operation you want to do : t
Choose a trigonometric ratio:
1. Sine
2. Cosine
3. Tangent
4. Cosecant
5. Secant
6. Cotangent
Enter your choice (1-6): 1
Enter the angle in degrees: 30
Sine: 0.500000
```

### Linear Equation (2 variables)
```
enter the operation you want to do : e
enter 2 for two variables and 3 for three variables : 2
enter cofficient of x and y and enter constant term respectively in first equation
2 3 8
enter cofficient of x and y and enter constant term respectively in second equation
3 2 7
x = 0.400000
y = 2.400000
```

### Quadratic Equation
```
enter the operation you want to do : $
enter the cofficient of x square and x and enter constant term respectively
1 -5 6
x1 = 3.000000
x2 = 2.000000
```

## History File
All calculations are automatically saved to `history.txt` in the same directory as the program. Each operation is logged with its input values and result for future reference.

### Example History File Content
```
10.000000 + 20.000000 = 30.000000 
10.000000 - 5.000000 = 5.000000 
sin(30.000000) = 0.500000
3.000000! = 6.000000
```

## Input Validation
The program includes validation for:
- Division by zero
- Square root of negative numbers
- Logarithm domain restrictions (x > 0, base > 0, base ≠ 1)
- Inconsistent system of linear equations
- Quadratic equations with no real solutions

## Exit
Enter **@** at the operation prompt to quit the program.

## Requirements
- GCC compiler or any C compiler
- Standard C library (including math library `-lm`)

## Libraries Used

### `stdio.h` (Standard Input/Output Library)
Provides functions for reading input from the user and displaying output to the console. This library is essential for:
- `printf()` - Display menu options and calculation results
- `scanf()` - Read user input for numbers and choices
- `FILE` operations - Open, write to, and close the `history.txt` file

### `stdlib.h` (Standard Library)
Provides general purpose utility functions. Used in this calculator for:
- `exit()` - Gracefully terminate the program when user enters '@'

### `math.h` (Mathematics Library)
Provides mathematical functions necessary for scientific calculations:
- `pow()` - Calculate power operations (base^exponent)
- `sqrt()` - Compute square root of numbers
- `sin()`, `cos()`, `tan()` - Calculate trigonometric ratios
- `log()` - Calculate logarithmic values with any base

**Note:** When compiling, use `-lm` flag to link the math library:
```bash
gcc ScientificCalculator.c -o calculator -lm
```

## Notes
- Angles for trigonometric functions are expected in **degrees**
- Logarithm calculations support any valid base
- Linear equations are solved using **Cramer's Rule** (determinant method)
- System of equations must be consistent (determinant ≠ 0) for unique solutions
