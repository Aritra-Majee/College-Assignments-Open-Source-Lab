# Simple Calculator (C Project)

## Overview

This project is a simple calculator written in C. It allows the user to perform basic arithmetic operations: addition, subtraction, multiplication, and division. The user is prompted to choose whether to use the calculator, select an operator, and enter two numbers. The result is then displayed.

## Features

- Addition, Subtraction, Multiplication, Division
- Input validation for calculator usage and operator
- Division by zero handling

## File Structure

```
Week1/
└── Calculator/
    ├── Simple_Calculator.c
    └── documentation.md
```

## How to Compile and Run

1. Open a terminal and navigate to the `Week1/Calculator` directory.
2. Compile the code using `gcc`:
   ```bash
   gcc Simple_Calculator.c -o calculator
   ```
3. Run the executable:
   ```bash
   ./calculator
   ```

## Usage Example

```
Want to use calculator?(Y/N) : 
Y
Choose an operator ( + , - , * , / ) : 
+
Enter the value of Number 1 : 
10
Enter the value of Number 2 : 
5
Addition of Two Numbers :

 10.00 + 5.00 = 15.00

 Thank You !
```

## Notes

- Enter `Y` or `y` to use the calculator, `N` or `n` to exit.
- Only the operators `+`, `-`, `*`, `/` are supported.
- Division by zero is not allowed and will display an error message.

## Author

- Aritra Majee
- Date: July 29, 2025