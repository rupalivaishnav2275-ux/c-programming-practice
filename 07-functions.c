// Program: Functions in C
// Description: Demonstrates functions, types, syntax, arguments, and practice questions.
// Author: Rupali Vaishnav
// Date: 2026

// Learning Platform: Apna College
// Compiler: GCC (MinGW)
// OS: Windows

// ======================================================
// 🔹 EXECUTION (WINDOWS + VS CODE)
// ======================================================

// 1. Write code in VS Code
// 2. Open Terminal (Ctrl + `)
// 3. Compile:
//    gcc 07-functions.c -o func -lm
// 4. Run:
//    func

// ======================================================
// 🔹 DEFINITIONS
// ======================================================

// Function:
// A block of code that performs a specific task and can be reused.

// ======================================================
// 🔹 TYPES OF FUNCTIONS
// ======================================================

// 1. Library Functions → Predefined (printf, scanf, sqrt)
// 2. User-defined Functions → Created by user

// ======================================================
// 🔹 FUNCTION SYNTAX (3 TYPES)
// ======================================================

// 1. Function Declaration (Prototype)
// return_type function_name(parameters);

// 2. Function Definition
// return_type function_name(parameters) {
//     // code
// }

// 3. Function Call
// function_name(arguments);

// ======================================================
// 🔹 PARAMETERS & ARGUMENTS
// ======================================================

// Parameter:
// Variables defined in function definition

// Argument:
// Values passed during function call

// Example:
// void add(int a, int b) → parameters
// add(5, 10) → arguments

// ======================================================
// 🔹 RETURN VALUE
// ======================================================

// Function can return a value using return keyword

// int sum() {
//     return 10;
// }

// ======================================================
// 🔹 DIFFERENCE: PARAMETER vs ARGUMENT
// ======================================================

// Parameter →
// variable in function definition.
// used to receive value.
// formal parameters.
// Argument  → 
// actual value passed in function call.
// used to send value.
// actual parameters.

// ======================================================
// 🔹 COMPILATION
// ======================================================

// gcc file_name.c -o output_name -lm
// ./output_name

// ======================================================
// 🔹 LEARNINGS, INSIGHTS & COMMON MISTAKES
// ======================================================

//  NOTES:
// - Functions improve code reusability
// - Code becomes modular and readable
// - Library functions save time

//  IMPORTANT POINTS:
// - Function must be declared before use (or use prototype)
// - Match data types of return and parameters
// - Use -lm for math functions (sqrt, pow)
// - Always include required header files

//  COMMON MISTAKES:
// - Forgetting to return value in non-void function
// - Mismatch in parameter and argument types
// - Missing function prototype
// - Not linking math library (-lm)
// - Using wrong format specifier (e.g., %d instead of %lf)


// ======================================================
// 🔹 FUNCTION DECLARATIONS
// ======================================================

#include <stdio.h>
#include <math.h>

// Practice Functions
void checkTemperature(float temp);
double findSquareRoot(double num);

// ======================================================
// 🔹 MAIN FUNCTION
// ======================================================

int main() {

    // ==================================================
    // 🔹 FUNCTION CALL EXAMPLE
    // ==================================================

    printf("\n--- FUNCTION CALL ---\n");

    checkTemperature(35.5);
    checkTemperature(18.0);

    // ==================================================
    // 🔹 RETURN VALUE EXAMPLE
    // ==================================================

    double number;
    printf("\nEnter number to find square root: ");
    scanf("%lf", &number);

    double result = findSquareRoot(number);
    printf("Square root = %.2lf\n", result);

    // ==================================================
    // 🔹 PRACTICE 1: HOT OR COLD
    // ==================================================

    float temp;
    printf("\nEnter temperature: ");
    scanf("%f", &temp);

    checkTemperature(temp);

    // ==================================================
    // 🔹 PRACTICE 2: SQUARE ROOT
    // ==================================================

    double num;
    printf("\nEnter number: ");
    scanf("%lf", &num);

    printf("Square root = %.2lf\n", findSquareRoot(num));

    return 0;
}

// ======================================================
// 🔹 FUNCTION DEFINITIONS
// ======================================================

// Function: Check Hot or Cold
void checkTemperature(float temp) {

    // Using conditional logic
    if (temp > 25) {
        printf("Hot\n");
    } else {
        printf("Cold\n");
    }
}

// Function: Find Square Root
double findSquareRoot(double num) {

    return sqrt(num);  // library function
}
