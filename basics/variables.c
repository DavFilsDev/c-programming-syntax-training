/**
 * File: variables.c
 * Author: Fanampinirina Miharisoa David FIls RATIANDRAIBE
 * Description: Demonstrates variable declaration, initialization, and usage
 * Date: 2025-09-14
 */

#include <stdio.h>

/**
 * main - Shows different ways to declare and use variables
 * 
 * Return: 0 on success
 */
int main(void)
{
    // ========== VARIABLE DECLARATION ==========
    // Syntax: data_type variable_name;
    int age;              // Declares an integer variable
    float salary;         // Declares a floating-point variable
    char grade;           // Declares a character variable
    
    // ========== VARIABLE INITIALIZATION ==========
    // Assigning value at declaration
    int student_count = 25;
    float pi = 3.14159;
    char initial = 'A';
    
    // Assigning values after declaration
    age = 25;
    salary = 45000.50;
    grade = 'B';
    
    // ========== MULTIPLE DECLARATIONS ==========
    int a, b, c;           // Declare multiple variables of same type
    a = 10;
    b = 20;
    c = a + b;
    
    // ========== CONSTANT VARIABLES ==========
    const int MAX_SCORE = 100;  // Cannot be modified after initialization
    // MAX_SCORE = 200;  // This would cause an error
    
    // ========== PRINTING VARIABLE VALUES ==========
    printf("=== Variable Values ===\n");
    printf("Age: %d\n", age);
    printf("Salary: %.2f\n", salary);  // %.2f shows 2 decimal places
    printf("Grade: %c\n", grade);
    printf("Student Count: %d\n", student_count);
    printf("PI: %.5f\n", pi);
    printf("Initial: %c\n", initial);
    
    printf("\n=== Multiple Variables ===\n");
    printf("a = %d, b = %d, c = a + b = %d\n", a, b, c);
    
    printf("\n=== Constants ===\n");
    printf("Maximum Score: %d\n", MAX_SCORE);
    
    // ========== VARIABLE SCOPE DEMONSTRATION ==========
    {
        int block_variable = 99;  // Local to this block
        printf("\nInside block: %d\n", block_variable);
    }
    // printf("%d", block_variable);  // Error: block_variable not accessible here
    
    return 0;
}