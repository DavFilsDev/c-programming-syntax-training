/**
 * File: input_output.c
 * Author: Fanampinirina Miharisoa David FIls RATIANDRAIBE
 * Description: Demonstrates input and output operations in C
 * Date: 2025-09-14
 */

#include <stdio.h>
#include <string.h>

/**
 * main - Shows various input/output functions
 * 
 * Return: 0 on success
 */
int main(void)
{
    // ========== OUTPUT FUNCTIONS ==========
    printf("=== OUTPUT FUNCTIONS ===\n\n");
    
    // printf() - formatted output
    printf("1. Basic printf:\n");
    printf("Hello, World!\n");
    
    printf("\n2. Format specifiers:\n");
    int age = 25;
    float height = 5.9;
    char initial = 'J';
    char name[] = "John";
    
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Height: %.1f feet\n", height);
    printf("Initial: %c\n", initial);
    
    printf("\n3. Field width and precision:\n");
    printf("Right aligned: |%10d|\n", age);
    printf("Left aligned: |%-10d|\n", age);
    printf("With precision: %.3f\n", 3.14159);
    printf("Padding with zeros: %05d\n", age);
    
    printf("\n4. Multiple specifiers:\n");
    printf("%s is %d years old and is %.1f feet tall\n", name, age, height);
    
    // puts() - outputs a string with newline
    printf("\n5. puts() function:\n");
    puts("This is from puts()");
    puts("It automatically adds a newline");
    
    // putchar() - outputs a single character
    printf("\n6. putchar() function:\n");
    putchar('A');
    putchar('\n');
    putchar('B');
    putchar('\n');
    
    // ========== INPUT FUNCTIONS ==========
    printf("\n\n=== INPUT FUNCTIONS ===\n");
    
    // Clear input buffer function
    void clear_input_buffer(void)
    {
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }
    
    // 1. scanf() - formatted input
    printf("\n1. scanf() - Enter your age: ");
    int user_age;
    scanf("%d", &user_age);  // Note: & is required for variables
    printf("You entered: %d\n", user_age);
    clear_input_buffer();  // Clear buffer
    
    printf("\nEnter your height (in feet): ");
    float user_height;
    scanf("%f", &user_height);
    printf("You entered: %.2f feet\n", user_height);
    clear_input_buffer();
    
    // Multiple inputs
    printf("\nEnter day, month, year (space separated): ");
    int day, month, year;
    scanf("%d %d %d", &day, &month, &year);
    printf("Date: %d/%d/%d\n", day, month, year);
    clear_input_buffer();
    
    // 2. getchar() - reads a single character
    printf("\n2. getchar() - Enter a character: ");
    char ch = getchar();
    printf("You entered: '%c' (ASCII: %d)\n", ch, ch);
    clear_input_buffer();
    
    // 3. gets() and fgets() - reads strings (fgets is safer)
    printf("\n3. fgets() - Enter your full name: ");
    char full_name[50];
    fgets(full_name, sizeof(full_name), stdin);
    // Remove newline if present
    full_name[strcspn(full_name, "\n")] = 0;
    printf("Hello, %s!\n", full_name);
    
    // 4. Reading multiple data types
    printf("\n4. Multiple data types input:\n");
    printf("Enter (name age salary): ");
    char emp_name[30];
    int emp_age;
    float emp_salary;
    scanf("%s %d %f", emp_name, &emp_age, &emp_salary);
    printf("Employee: %s, Age: %d, Salary: $%.2f\n", 
           emp_name, emp_age, emp_salary);
    clear_input_buffer();
    
    // ========== ERROR HANDLING ==========
    printf("\n\n=== INPUT VALIDATION ===\n");
    
    printf("Enter a number (validation example): ");
    int number;
    int result = scanf("%d", &number);
    if (result == 1) {
        printf("Successfully read: %d\n", number);
    } else {
        printf("Invalid input! Please enter a number.\n");
        clear_input_buffer();
    }
    
    // ========== COMPLETE EXAMPLE ==========
    printf("\n\n=== COMPLETE STUDENT REGISTRATION EXAMPLE ===\n");
    
    char student_name[50];
    int student_id;
    float student_gpa;
    
    printf("Enter student name: ");
    fgets(student_name, sizeof(student_name), stdin);
    student_name[strcspn(student_name, "\n")] = 0;
    
    printf("Enter student ID: ");
    scanf("%d", &student_id);
    
    printf("Enter student GPA: ");
    scanf("%f", &student_gpa);
    
    printf("\n--- Student Information ---\n");
    printf("Name: %s\n", student_name);
    printf("ID: %d\n", student_id);
    printf("GPA: %.2f\n", student_gpa);
    printf("Status: %s\n", (student_gpa >= 2.0) ? "Passing" : "Warning");
    
    // ========== FORMATTED OUTPUT TABLE ==========
    printf("\n\n=== FORMATTED TABLE ===\n");
    printf("%-15s %-10s %-10s\n", "Name", "Age", "Score");
    printf("%-15s %-10d %-10.2f\n", "Alice", 22, 95.5);
    printf("%-15s %-10d %-10.2f\n", "Bob", 24, 87.3);
    printf("%-15s %-10d %-10.2f\n", "Charlie", 23, 91.8);
    
    return 0;
}