/**
 * File: hello_world.c
 * Author: Your Name
 * Description: First C program - demonstrates basic program structure
 * Date: 2026-03-24
 */

#include <stdio.h>  // Standard Input Output header file

/**
 * main - Entry point of every C program
 * 
 * Return: 0 on successful execution
 */
int main(void)
{
    // printf() is a library function that outputs formatted text
    printf("Hello, World!\n");
    
    // Another example with multiple lines
    printf("Welcome to C Programming!\n");
    printf("This is my first program.\n");
    
    // \n is an escape sequence for new line
    printf("Learning\tC\tSyntax\n");  // \t adds tab space
    
    return 0;  // Return 0 indicates successful execution
}