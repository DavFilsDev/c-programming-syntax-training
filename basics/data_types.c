/**
 * File: data_types.c
 * Author: Fanampinirina Miharisoa David FIls RATIANDRAIBE
 * Description: Demonstrates all basic data types in C and their properties
 * Date: 2025-09-14
 */

#include <stdio.h>
#include <limits.h>   // For integer limits
#include <float.h>    // For float limits

/**
 * main - Shows different data types, their sizes, and ranges
 * 
 * Return: 0 on success
 */
int main(void)
{
    // ========== INTEGER TYPES ==========
    printf("=== INTEGER DATA TYPES ===\n");
    
    char c = 'A';                    // 1 byte, -128 to 127 or 0-255
    unsigned char uc = 255;          // 1 byte, 0-255
    
    short int s = 32767;             // 2 bytes, -32,768 to 32,767
    unsigned short int us = 65535;   // 2 bytes, 0-65,535
    
    int i = 2147483647;              // 4 bytes, -2.1B to 2.1B
    unsigned int ui = 4294967295U;   // 4 bytes, 0 to 4.2B
    
    long int l = 2147483647L;        // 4 or 8 bytes
    long long int ll = 9223372036854775807LL;  // 8 bytes
    
    // Size of each type
    printf("Size of char: %zu byte\n", sizeof(char));
    printf("Size of short: %zu bytes\n", sizeof(short));
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of long: %zu bytes\n", sizeof(long));
    printf("Size of long long: %zu bytes\n", sizeof(long long));
    
    // ========== FLOATING POINT TYPES ==========
    printf("\n=== FLOATING POINT TYPES ===\n");
    
    float f = 3.14159f;              // 4 bytes, 6-7 decimal digits
    double d = 3.14159265359;        // 8 bytes, 15-16 decimal digits
    long double ld = 3.141592653589793238L;  // 16 bytes, 18-19 decimal digits
    
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of double: %zu bytes\n", sizeof(double));
    printf("Size of long double: %zu bytes\n", sizeof(long double));
    
    printf("Float value: %.6f\n", f);
    printf("Double value: %.12f\n", d);
    printf("Long double value: %.18Lf\n", ld);
    
    // ========== TYPE MODIFIERS ==========
    printf("\n=== TYPE MODIFIERS ===\n");
    
    signed int si = -100;            // Can store negative values
    unsigned int uii = 100;          // Can only store non-negative
    
    printf("Signed integer: %d\n", si);
    printf("Unsigned integer: %u\n", uii);
    
    // ========== VOID TYPE ==========
    printf("\n=== VOID TYPE ===\n");
    // void is used for functions that return nothing
    // and for generic pointers
    
    // ========== TYPE LIMITS ==========
    printf("\n=== TYPE LIMITS (from limits.h) ===\n");
    printf("CHAR_MIN: %d, CHAR_MAX: %d\n", CHAR_MIN, CHAR_MAX);
    printf("INT_MIN: %d, INT_MAX: %d\n", INT_MIN, INT_MAX);
    printf("LONG_MIN: %ld, LONG_MAX: %ld\n", LONG_MIN, LONG_MAX);
    
    printf("\n=== FLOAT LIMITS (from float.h) ===\n");
    printf("FLT_MIN: %e, FLT_MAX: %e\n", FLT_MIN, FLT_MAX);
    printf("DBL_MIN: %e, DBL_MAX: %e\n", DBL_MIN, DBL_MAX);
    
    // ========== PRACTICAL EXAMPLES ==========
    printf("\n=== PRACTICAL EXAMPLES ===\n");
    
    // Integer overflow example
    int max_int = INT_MAX;
    printf("Max int value: %d\n", max_int);
    printf("Max int + 1: %d (overflow!)\n", max_int + 1);
    
    // Float precision example
    float precise_float = 1.0f / 3.0f;
    double precise_double = 1.0 / 3.0;
    printf("Float precision (1/3): %.10f\n", precise_float);
    printf("Double precision (1/3): %.10f\n", precise_double);
    
    return 0;
}