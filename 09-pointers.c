// Program: Pointers in C
// Description: Covers pointer fundamentals with clear examples, modular functions, and real use-cases like swapping, arrays, and memory access.
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
//    gcc 09-pointers.c -o ptr
// 4. Run:
//    ptr

// ======================================================
// 🔹 DEFINITIONS
// ======================================================

// Pointer:
// A variable that stores the memory address of another variable.

// Why Pointers Matter:
// - They allow direct memory access
// - Enable efficient data manipulation
// - Used in arrays, functions, and dynamic memory
// - Core concept for advanced topics like data structures

// ======================================================
// 🔹 SYNTAX & DECLARATION
// ======================================================

// Syntax:
// data_type *pointer_name;

// Example:
// int x = 10;
// int *ptr = &x;

// & → Address-of operator
// * → Dereference operator

// ======================================================
// 🔹 FORMAT SPECIFIERS
// ======================================================

// %d  → integer value
// %p  → address (pointer)
// %u  → unsigned integer (sometimes used for address)

// ======================================================
// 🔹 POINTER TO POINTER
// ======================================================

// A pointer that stores the address of another pointer

// Syntax:
// int **ptr2;

// Example:
// int x = 10;
// int *ptr1 = &x;
// int **ptr2 = &ptr1;

// Access:
// *ptr1 → value of x
// **ptr2 → value of x

// ======================================================
// 🔹 FUNCTION CALLS WITH POINTERS
// ======================================================

// Call by Value:
// Copy of variable is passed → original value not changed

// Call by Reference:
// Address is passed → original value can be modified

// ======================================================
// 🔹 LEARNINGS, INSIGHTS & COMMON MISTAKES
// ======================================================

// Notes:
// - I understood that pointers store memory addresses, not actual values
// - I learned how changing values using pointers affects original variables
// - I observed how arrays internally behave like pointers
// - This topic helped me connect memory with program execution

// Important Points:
// - Always initialize pointers before use
// - Dereferencing uninitialized pointers can crash the program
// - Pointer arithmetic depends on data type size
// - %p should be used to print addresses (best practice)
// - Double pointers (**ptr) are useful in advanced memory handling

// Mistakes:
// - I used uninitialized pointers (wild pointers)
// - I confused between * (value) and & (address)
// - I tried printing address using %d instead of %p
// - I misunderstood how pointer arithmetic works initially

// Reflection:
// This file helped me understand how memory works in C and how pointers give more control over data.
// I now feel more confident using pointers in functions and arrays.

// ======================================================
// 🔹 FUNCTION DECLARATIONS
// ======================================================

#include <stdio.h>

// Call by value
void swapValue(int a, int b);

// Call by reference
void swapReference(int *a, int *b);

// Practice functions
int findMax(int *a, int *b);
void reverseArray(int arr[], int size);
void printAlphabets();

// ======================================================
// 🔹 MAIN FUNCTION
// ======================================================

int main() {

    // ==================================================
    // 🔹 BASIC POINTER DEMO
    // ==================================================

    int x = 10;
    int *ptr = &x;

    printf("\n--- POINTER DEMO ---\n");
    printf("Value of x = %d\n", x);
    printf("Address of x = %p\n", &x);
    printf("Pointer value = %p\n", ptr);
    printf("Value using pointer = %d\n", *ptr);

    // ==================================================
    // 🔹 POINTER TO POINTER
    // ==================================================

    int **ptr2 = &ptr;

    printf("\n--- POINTER TO POINTER ---\n");
    printf("Value using **ptr2 = %d\n", **ptr2);

    // ==================================================
    // 🔹 CALL BY VALUE vs REFERENCE
    // ==================================================

    int a = 5, b = 10;

    printf("\n--- CALL BY VALUE ---\n");
    swapValue(a, b);
    printf("After swapValue: a = %d, b = %d\n", a, b);

    printf("\n--- CALL BY REFERENCE ---\n");
    swapReference(&a, &b);
    printf("After swapReference: a = %d, b = %d\n", a, b);

    // ==================================================
    // 🔹 PRACTICE 1: MAX USING POINTER
    // ==================================================

    int num1, num2;
    printf("\nEnter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Maximum = %d\n", findMax(&num1, &num2));

    // ==================================================
    // 🔹 PRACTICE 2: REVERSE ARRAY
    // ==================================================

    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;

    printf("\nOriginal Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nReversed Array: ");
    reverseArray(arr, size);

    // ==================================================
    // 🔹 PRACTICE 3: ALPHABETS USING POINTER
    // ==================================================

    printf("\n\nAlphabets:\n");
    printAlphabets();

    return 0;
}

// ======================================================
// 🔹 FUNCTION DEFINITIONS
// ======================================================

// Call by Value (No change in original)
void swapValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

// Call by Reference (Changes original)
void swapReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Find maximum using pointer
int findMax(int *a, int *b) {
    return (*a > *b) ? *a : *b;
}

// Reverse array using pointer
void reverseArray(int arr[], int size) {
    int *start = arr;
    int *end = arr + size - 1;

    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}

// Print alphabets using pointer
void printAlphabets() {
    char ch = 'A';
    char *ptr = &ch;

    while (*ptr <= 'Z') {
        printf("%c ", *ptr);
        (*ptr)++;
    }
}
