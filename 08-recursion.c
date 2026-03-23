// Program: Recursion in C
// Description: Demonstrates recursion, working, comparison with normal functions,
//              and practice problems.
// Author: Rupali Vaishnav
// Date: 2026

// Learning Source: Apna College (with my own notes and practice)

// Compiler: GCC (MinGW)
// OS: Windows

// ======================================================
// 🔹 EXECUTION (WINDOWS + VS CODE)
// ======================================================

// 1. Write code in VS Code
// 2. Open Terminal (Ctrl + `)
// 3. Compile:
//    gcc 08-recursion.c -o recur
// 4. Run:
//    recur

// ======================================================
// 🔹 DEFINITIONS
// ======================================================

// Recursion:
// A function that calls itself to solve a smaller part of a problem.

// ======================================================
// 🔹 KEY CONCEPTS
// ======================================================

// Base Case:
// Condition where recursion stops

// Recursive Case:
// Function calls itself with smaller input

// ======================================================
// 🔹 NORMAL FUNCTION vs RECURSION
// ======================================================

// Normal Function Call:
// Execution happens step-by-step using loops

// Example:
// for loop → iterative approach

// Recursion Function Call:
// Function calls itself until base case is reached

// Flow:
// function(n) → function(n-1) → function(n-2) → ... → base case

// ======================================================
// 🔹 DRY RUN EXAMPLE (SUM OF DIGITS: 123)
// ======================================================

// sumDigits(123)
// → 3 + sumDigits(12)
// → 3 + (2 + sumDigits(1))
// → 3 + 2 + (1 + sumDigits(0))
// → 3 + 2 + 1 + 0 = 6

// ======================================================
// 🔹 LEARNINGS & COMMON MISTAKES
// ======================================================

// NOTES:
// - Recursion reduces code size but increases call stack usage
// - Every recursive function must have a base case
// - Useful for problems like factorial, Fibonacci, trees, etc.

// MISTAKES:
// - Forgetting base case → infinite recursion
// - Wrong recursive step → incorrect result
// - Stack overflow for large inputs

// ======================================================
// 🔹 FUNCTION DECLARATIONS
// ======================================================

#include <stdio.h>

// Practice Functions
int sumOfDigits(int n);
long long power(int base, int exp);

// ======================================================
// 🔹 MAIN FUNCTION
// ======================================================

int main() {

    printf("\n--- RECURSION DEMO ---\n");

    // ==================================================
    // 🔹 PRACTICE 1: SUM OF DIGITS
    // ==================================================

    int number;
    printf("\nEnter a number: ");
    scanf("%d", &number);

    int sum = sumOfDigits(number);
    printf("Sum of digits = %d\n", sum);

    // ==================================================
    // 🔹 PRACTICE 2: POWER FUNCTION
    // ==================================================

    int base, exponent;
    printf("\nEnter base and exponent: ");
    scanf("%d %d", &base, &exponent);

    long long result = power(base, exponent);
    printf("Result = %lld\n", result);

    return 0;
}

// ======================================================
// 🔹 FUNCTION DEFINITIONS
// ======================================================

// Function: Sum of Digits (Recursion)
int sumOfDigits(int n) {

    // Base Case
    if (n == 0)
        return 0;

    // Recursive Case
    return (n % 10) + sumOfDigits(n / 10);
}

// Function: Power Function (Recursion)
long long power(int base, int exp) {

    // Base Case
    if (exp == 0)
        return 1;

    // Recursive Case
    return base * power(base, exp - 1);
}
