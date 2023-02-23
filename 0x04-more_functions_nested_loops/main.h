/**
 * This is a header file that contains
 * function declarations for all tasks
 * under the 0x04-more_functions_nested_loops
 * directory.
 * It will be used and included as a library.
 *
 * #ifndef and #define are known as header guards,
 * Their primary purpose is to prevent header files
 * from being included multiple times.
 * #endif determines if the preprocessing of #if,
 * #ifdef, or #ifndef has been completed successfully.
 * 
 * <stdio.h> is included as well as some functions
 * will make use of stdin and stdout
 */
#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
int _putchar(char c);
int _isupper(int c);
int _isdigit(int c);
int mul(int a, int b);
void print_numbers(void);
void print_most_numbers(void);
void more_numbers(void);
void print_line(int n);
void print_diagonal(int n);
void print_square(int size);
void print_triangle(int size);
void print_number(int n);

#endif /* MAIN_H */
