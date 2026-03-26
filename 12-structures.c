// Program: Structures in C
// Description: Demonstrates structures, syntax, memory behavior, pointers, typedef, and a mini college management system.
// Author: Rupali Vaishnav
// Date: 2026

// Learning Source: Apna College (with my own notes + project-based understanding)

// Compiler: GCC (MinGW)
// OS: Windows

// ======================================================
// 🔹 EXECUTION (WINDOWS + VS CODE)
// ======================================================

// gcc 12-structures.c -o struct
// struct

// ======================================================
// 🔹 DEFINITIONS
// ======================================================

// Structure:
// A user-defined data type used to group variables of different data types.

// ======================================================
// 🔹 SYNTAX & DECLARATION
// ======================================================

// struct Student {
//     int id;
//     float cgpa;
// };

// ======================================================
// 🔹 INITIALIZATION
// ======================================================

// struct Student s1 = {1, 8.5};

// ======================================================
// 🔹 STRUCTURES IN MEMORY
// ======================================================

// Stored in contiguous memory (with padding for alignment)

// ======================================================
// 🔹 ARRAY OF STRUCTURES
// ======================================================

// struct Student arr[100];
// arr[i].id

// ======================================================
// 🔹 POINTERS TO STRUCTURES
// ======================================================

// struct Student *ptr = &s1;
// (*ptr).id OR ptr->id

// ======================================================
// 🔹 ARROW OPERATOR
// ======================================================

// ptr->id (used with structure pointers)

// ======================================================
// 🔹 PASSING STRUCTURE TO FUNCTION
// ======================================================

// By Value → Copy (slower)
// By Reference → Efficient (preferred)

// ======================================================
// 🔹 LEARNINGS, INSIGHTS & COMMON MISTAKES
// ======================================================

// Notes:
// - I understood that structures help in grouping different data types into one unit
// - I learned how to model real-world entities like students, teachers, and staff using structures
// - I noticed that arrays of structures can act like a small database
// - I practiced using pointers to structures for efficient data handling
// - I understood how typedef simplifies structure syntax
// - I learned how to pass structures to functions using pointers
// - This topic helped me connect programming with real-world system design

// Important Points:
// - Use '.' to access structure members and '->' when using pointers
// - Structures are stored in contiguous memory with possible padding
// - Passing structure by reference is more efficient than by value
// - Always use proper input methods for strings (scanf with space handling)
// - typedef makes code cleaner and more readable
// - Use strcmp() for comparing string values like roles

// Mistakes:
// - I confused '.' and '->' while accessing structure members
// - I forgot to use '&' while passing structure to functions
// - I made mistakes while taking string input using scanf
// - I initially treated all roles same (fixed by adding condition for CGPA)
// - I didn't think about real-world modeling at first (later improved design)

// ====================================================== 
// 🔹 TYPEDEF
// ====================================================== 

// typedef creates alias for structure

#include <stdio.h>
#include <string.h> 

// ======================================================
// 🔹 TYPEDEF STRUCTURE
// ======================================================

typedef struct { 
    char name[50];
    int id;
    float marks;
    float cgpa; 
    int attendance; 
    char role[20];  // Student / Teacher / Staff
}Person; 

// ======================================================
// 🔹 FUNCTION DECLARATIONS
// ====================================================== 

void inputPerson(Person *p); 
void display(Person p); 
float calculateCGPA(float marks); 

// Practice Functions
void simpleStudentDemo();

// ====================================================== 
// 🔹 MAIN FUNCTION
// ====================================================== 

int main() { 

    // ================================================== 
   // 🔹 PRACTICE 1: BASIC STRUCTURE DEMO 
   // ================================================== 

    simpleStudentDemo();  
 
   // ================================================== 
   // 🔹 PRACTICE 2: MINI COLLEGE MANAGEMENT SYSTEM  
   // ==================================================
  
     Person people[3]; 
    printf("\n--- COLLEGE MANAGEMENT SYSTEM ---\n");
  
     for (int i = 0; i < 3; i++) { 
       printf("\nEnter details for person %d:\n", i + 1);
       inputPerson(&people[i]);
        } 
  
       printf("\n--- DATABASE ---\n"); 
  
      for (int i = 0; i < 3; i++) {
        display(people[i]); } return 0; }

    // ====================================================== 
    // 🔹 FUNCTION DEFINITIONS 
   // ====================================================== 

// PRACTICE 1: Simple structure usage 
void simpleStudentDemo() { 
  
  struct Student { 
     int id; 
     float marks; 
}; 
  
   struct Student s1 = {1, 85.5}; 
  
   printf("\n--- SIMPLE STRUCTURE DEMO ---\n");
   printf("ID = %d\n", s1.id);
   printf("Marks = %.2f\n", s1.marks); 
} 

// PRACTICE 2: Input function (Pointer)
void inputPerson(Person *p) { 
  
  printf("Name: "); 
  scanf(" %[^\n]", p->name); 
  
  printf("ID: "); 
  scanf("%d", &p->id); 
  
  printf("Marks: "); 
  scanf("%f", &p->marks); 
  
  printf("Attendance: ");
  scanf("%d", &p->attendance);
  
  printf("Role (Student/Teacher/Staff): ");
  scanf("%s", p->role); 
  
  p->cgpa = calculateCGPA(p->marks); 
}

// CGPA calculation
float calculateCGPA(float marks) { 
  return marks / 10.0; 
} 

// Display function 
void display(Person p) { 
  
  printf("\nName: %s", p.name); 
  printf("\nID: %d", p.id);
  printf("\nRole: %s", p.role); 
  printf("\nMarks: %.2f", p.marks); 
  printf("\nCGPA: %.2f", p.cgpa); 
  printf("\nAttendance: %d\n", p.attendance); 
}
