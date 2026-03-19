// Program: Variables And Data Types
// Description: Demonstrates variables, data types, constants, input/output, and practice questions.
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
//    gcc 02-variables.c -o variables
// 4. Run:
//    variables

// ======================================================
// 🔹 DEFINITIONS
// ======================================================

// Variable: A container used to store data values.
// Data Types: Specifies the type of data a variable can store.
// Constant: Fixed value that cannot be changed during execution.
// Comments: Lines ignored by the compiler, used for explanation.
// Compilation: Process of converting C code into machine code using a compiler.

// ======================================================
// 🔹 DATA TYPES (WITH SIZE)
// ======================================================

// | Data Type       | Size (bytes) |
// |----------------|-------------|
// | int            | 4           |
// | float          | 4           |
// | double         | 8           |
// | char           | 1           |
// | short int      | 2           |
// | long int       | 4 or 8      |
// | long long int  | 8           |
// | unsigned int   | 4           |
// | signed int     | 4           |
// | void           | 0           |
// | bool (_Bool)   | 1           |

// ======================================================
// 🔹 CONSTANTS
// ======================================================

// 1. Integer Constant → 10, -5, 100
// 2. Real Constant → 3.14, 2.5
// 3. Character Constant → 'A', 'b', '%'

// ======================================================
// 🔹 KEYWORDS (32 in C)
// ======================================================

// | auto | break | case | char | const | continue |
// | default | do | double | else | enum | extern |
// | float | for | goto | if | int | long |
// | register | return | short | signed | sizeof | static |
// | struct | switch | typedef | union | unsigned | void |
// | volatile | while |

// ======================================================
// 🔹 COMMENTS
// ======================================================

// Single-line comment → //
// Multi-line comment → /* */

// ======================================================
// 🔹 OUTPUT
// ======================================================

// printf() is used for output

// Format Specifiers:
// %d → integer
// %f → float
// %c → character

// Examples:
// printf("%d", 10);
// printf("%f", 3.14);
// printf("%c", 'A');

// ======================================================
// 🔹 INPUT
// ======================================================

// scanf() is used for input

// Example: Sum of two numbers
/*
int x, y;
scanf("%d %d", &x, &y);
int sum = x + y;
printf("Sum = %d", sum);
*/

// ======================================================
// 🔹 COMPILATION
// ======================================================

// gcc file_name.c -o output_name
// ./output_name

// ======================================================
// 🔹 LEARNINGS, INSIGHTS & COMMON MISTAKES
// ======================================================

// Notes:
// - int is used for integers
// - float is used for decimal numbers
// - char is used for single characters
// - printf() is used to display output

// Important Points:
// - %d is used for int 
// - %f is used for float 
// - %c is used for char
// - Variables can be reassigned

// Mistakes:
// - Forgot format specifiers earlier
// - Confused between %d and %f

#include <stdio.h>

int main () {

// ======================================================
// 🔹 IMPLEMENTATION: VARIABLES, DATA TYPES & OUTPUT
// ======================================================

    // 🔸 Variables Section

    // Basic Variables 
    int number = 22;
    char percentage = '%';
    float pi = 3.14;

    // Variable reassignment
    int age = 20;
    age = 21;

    // Multiple variables
    int a = 30;
    int b = 80;

    // Naming conventions
    int _age = 20;
    int initial_price = 50;

    // Cleaner Output
    printf("\n--- Output ---\n");
    
    // Output
    printf("number = %d\n", number);
    printf("percentage = %c\n", percentage);
    printf("age = %d\n", age);
    printf("pi = %f\n", pi);
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("_age = %d\n" , _age);
    printf("initial price = %d\n" , initial_price);

// ==================================================
// 🔹 INPUT EXAMPLE (SUM)
// ==================================================
 
    // 🔸 Input Section

    int x, y;
    printf("\nEnter two numbers: ");
    scanf("%d %d", &x, &y);

    int sum = x + y;
    printf("Sum = %d\n", sum);

// ==================================================
// 🔹 PRACTICE QUESTIONS WITH ANSWERS
// ==================================================

    // 🔸 Practice Section
    
    // 1. Perimeter of Rectangle
    int side1, side2;
    printf("\nEnter sides of rectangle: ");
    scanf("%d %d", &side1, &side2);

    int perimeter = 2 * (side1 + side2);
    printf("Perimeter = %d\n", perimeter);

    // 2. Cube of a number
    int n;
    printf("\nEnter a number: ");
    scanf("%d", &n);

    int cube = n * n * n;
    printf("Cube = %d\n", cube);

    // 3. Comments Example:
    // This program calculates perimeter
    /* This program calculates cube of a number */

    return 0;
}
