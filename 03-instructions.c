// Program: Instructions in C
// Description: Demonstrates instructions with types, and practice questions.
// Author: Rupali Vaishnav
// Date: 2026

// Learning Platform: Apna College
// Compiler: GCC (MinGW)
// OS: Windows

// ======================================================
// 🔹 EXECUTION (WINDOWS + VS CODE)
// ======================================================

// 1. Write code in VS Code
// 2. Open Terminal (Ctrl + ')
// 3. Compile:
//    gcc 03-instructions.c -o instructions
// 4. Run:
//    instructions

// ======================================================
// 🔹 DEFINITIONS
// ======================================================

// Instruction: A command given to the computer to perform a task.

// Types of Instructions in C:
// 1. Type Declaration Instruction
// 2. Arithmetic Instruction
// 3. Control Instruction

// ======================================================
// 🔹 TYPES OF INSTRUCTIONS
// ======================================================

// 1️⃣ Type Declaration Instruction
// Used to declare variables.
// Example: int a; float b;

// 2️⃣ Arithmetic Instruction
// Used to perform calculations.
// Example: a = b + c;

// 🔸 Power Function
// Used to calculate power using pow() from math.h
// Example: pow(2,3) = 8

// 🔸 Type Conversion
// Automatic: int → float
// Manual (Casting): (float)a

// 🔸 Operator Precedence
// Order in which operations are performed
// Example: *, /, % before +, - then = 

// 3️⃣ Control Instruction
// Determines execution flow:

// a) Sequence Control → default (top to bottom)
// b) Decision Control → if, else
// c) Loop Control → for, while, do-while
// d) Case Control → switch-case

// ======================================================
// 🔹 COMPILATION
// ======================================================

// gcc file_name.c -o output_name
// ./output_name

// ======================================================
// 🔹 LEARNINGS, INSIGHTS & COMMON MISTAKES
// ======================================================

// Notes:
// - Instructions control how a program runs
// - Arithmetic instructions perform calculations
// - Control instructions manage flow

// Important Points:
// - pow() requires math.h
// - Type casting is important for correct results
// - Operator precedence affects output

// Mistakes:
// - Forgetting to include math.h
// - Not using type casting (int division issue)
// - Misunderstanding precedence (2 + 3 * 4 ≠ 20)

// ======================================================
// 🔹 CODE IMPLEMENTATION
// ======================================================

#include <stdio.h>
#include <math.h>

int main() {

    // ==================================================
    // 🔹 TYPE DECLARATION INSTRUCTION
    // ==================================================

    int a = 10;
    int b = 20;

    printf("\n--- Type Declaration Example ---\n");
    printf("a = %d, b = %d\n", a, b);

    // ==================================================
    // 🔹 ARITHMETIC INSTRUCTION
    // ==================================================

    int sum = a + b;
    printf("\nSum = %d\n", sum);

    // Power function
    printf("Power (2^3) = %.0f\n", pow(2, 3));

    // Type Conversion
    float result = (float)a / b;
    printf("Type Conversion Result = %f\n", result);

    // Operator Precedence
    int value = 2 + 3 * 4;
    printf("Operator Precedence Result = %d\n", value);

    // ==================================================
    // 🔹 DECISION CONTROL
    // ==================================================

    int num;
    printf("\nEnter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("Even number\n");
    } else {
        printf("Odd number\n");
    }

    // ==================================================
    // 🔹 PRACTICE QUESTION 1
    // Check if character is digit or not
    // ==================================================

    char ch;
    printf("\nEnter a character: ");
    scanf(" %c", &ch);

    if (ch >= '0' && ch <= '9') {
        printf("It is a digit\n");
    } else {
        printf("It is NOT a digit\n");
    }

    // ==================================================
    // 🔹 PRACTICE QUESTION 2
    // Find smallest of two numbers
    // ==================================================

    int x, y;
    printf("\nEnter two numbers: ");
    scanf("%d %d", &x, &y);

    if (x < y) {
        printf("Smallest = %d\n", x);
    } else {
        printf("Smallest = %d\n", y);
    }

    return 0;
}
