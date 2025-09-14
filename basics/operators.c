/**
 * File: operators.c
 * Author: Fanampinirina Miharisoa David FIls RATIANDRAIBE
 * Description: Demonstrates all types of operators in C
 * Date: 2025-09-14
 */

#include <stdio.h>

/**
 * main - Shows usage of arithmetic, relational, logical, bitwise, and other operators
 * 
 * Return: 0 on success
 */
int main(void)
{
    int a = 10, b = 3;
    int result;
    
    // ========== 1. ARITHMETIC OPERATORS ==========
    printf("=== ARITHMETIC OPERATORS ===\n");
    printf("a = %d, b = %d\n\n", a, b);
    
    printf("Addition (+): %d + %d = %d\n", a, b, a + b);
    printf("Subtraction (-): %d - %d = %d\n", a, b, a - b);
    printf("Multiplication (*): %d * %d = %d\n", a, b, a * b);
    printf("Division (/): %d / %d = %d (integer division)\n", a, b, a / b);
    printf("Modulus (%%): %d %% %d = %d (remainder)\n", a, b, a % b);
    
    // Note: Division with floats
    printf("Float division: %d / %d = %.2f\n", a, b, (float)a / b);
    
    // Unary operators
    int x = 5;
    printf("\nUnary operators:\n");
    printf("x = %d\n", x);
    printf("+x = %d\n", +x);
    printf("-x = %d\n", -x);
    
    // ========== 2. INCREMENT/DECREMENT OPERATORS ==========
    printf("\n=== INCREMENT/DECREMENT OPERATORS ===\n");
    int count = 5;
    printf("count = %d\n", count);
    printf("++count (prefix): %d\n", ++count);  // Increment then use
    printf("After prefix: %d\n", count);
    printf("count++ (postfix): %d\n", count++); // Use then increment
    printf("After postfix: %d\n", count);
    printf("--count (prefix): %d\n", --count);
    printf("count-- (postfix): %d\n", count--);
    printf("Final count: %d\n", count);
    
    // ========== 3. RELATIONAL OPERATORS ==========
    printf("\n=== RELATIONAL OPERATORS ===\n");
    printf("%d > %d: %d\n", a, b, a > b);
    printf("%d < %d: %d\n", a, b, a < b);
    printf("%d >= %d: %d\n", a, b, a >= b);
    printf("%d <= %d: %d\n", a, b, a <= b);
    printf("%d == %d: %d\n", a, b, a == b);
    printf("%d != %d: %d\n", a, b, a != b);
    
    // ========== 4. LOGICAL OPERATORS ==========
    printf("\n=== LOGICAL OPERATORS ===\n");
    int p = 1, q = 0;  // 1 = true, 0 = false in C
    printf("p = %d (true), q = %d (false)\n", p, q);
    printf("p && q (AND): %d\n", p && q);
    printf("p || q (OR): %d\n", p || q);
    printf("!p (NOT): %d\n", !p);
    printf("!q (NOT): %d\n", !q);
    
    // Short-circuit evaluation
    printf("\nShort-circuit evaluation:\n");
    int result_and = (a > b) && (printf("This won't print if first condition false\n"));
    int result_or = (a < b) || (printf("This will print if first condition false\n"));
    
    // ========== 5. BITWISE OPERATORS ==========
    printf("\n=== BITWISE OPERATORS ===\n");
    unsigned int m = 12, n = 5;  // 12 = 1100, 5 = 0101
    printf("m = %u (binary: 1100), n = %u (binary: 0101)\n", m, n);
    printf("m & n (AND): %u (binary: 0100)\n", m & n);
    printf("m | n (OR): %u (binary: 1101)\n", m | n);
    printf("m ^ n (XOR): %u (binary: 1001)\n", m ^ n);
    printf("~m (NOT): %u\n", ~m);
    printf("m << 1 (Left shift): %u\n", m << 1);
    printf("m >> 1 (Right shift): %u\n", m >> 1);
    
    // ========== 6. ASSIGNMENT OPERATORS ==========
    printf("\n=== ASSIGNMENT OPERATORS ===\n");
    int value = 10;
    printf("Initial value: %d\n", value);
    
    value += 5;  // Equivalent to: value = value + 5
    printf("After += 5: %d\n", value);
    
    value -= 3;  // Equivalent to: value = value - 3
    printf("After -= 3: %d\n", value);
    
    value *= 2;  // Equivalent to: value = value * 2
    printf("After *= 2: %d\n", value);
    
    value /= 4;  // Equivalent to: value = value / 4
    printf("After /= 4: %d\n", value);
    
    value %= 3;  // Equivalent to: value = value % 3
    printf("After %%= 3: %d\n", value);
    
    // ========== 7. TERNARY (CONDITIONAL) OPERATOR ==========
    printf("\n=== TERNARY OPERATOR ===\n");
    int num = 15;
    char *result_ternary = (num % 2 == 0) ? "Even" : "Odd";
    printf("%d is %s\n", num, result_ternary);
    
    // Nested ternary
    int score = 85;
    char *grade = (score >= 90) ? "A" :
                  (score >= 80) ? "B" :
                  (score >= 70) ? "C" : "F";
    printf("Score %d: Grade %s\n", score, grade);
    
    // ========== 8. SIZEOF OPERATOR ==========
    printf("\n=== SIZEOF OPERATOR ===\n");
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of variable 'a': %zu bytes\n", sizeof(a));
    printf("Size of array: %zu\n", sizeof(int[10]));
    
    // ========== 9. ADDRESS OF & DEREFERENCE OPERATORS ==========
    printf("\n=== ADDRESS & DEREFERENCE OPERATORS ===\n");
    int var = 42;
    int *ptr = &var;  // & gets address, * dereferences pointer
    
    printf("Value of var: %d\n", var);
    printf("Address of var: %p\n", (void*)&var);
    printf("Value of ptr (address): %p\n", (void*)ptr);
    printf("Value pointed by ptr: %d\n", *ptr);
    
    // ========== 10. OPERATOR PRECEDENCE ==========
    printf("\n=== OPERATOR PRECEDENCE ===\n");
    int result_prec = 5 + 3 * 2;  // Multiplication has higher precedence
    printf("5 + 3 * 2 = %d (multiplication first)\n", result_prec);
    
    result_prec = (5 + 3) * 2;  // Parentheses override precedence
    printf("(5 + 3) * 2 = %d (parentheses first)\n", result_prec);
    
    return 0;
}