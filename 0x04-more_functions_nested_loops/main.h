#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>

/* _putchar : writes the character c to stdout */

int _putchar(char c);

/* isupper : function that checks for uppercase character */

int _isupper(int c);

/* isdigit : function that checks for a digit (0 through 9) */

int _isdigit(int c);

/* mul : function that multiplies two integers */

int mul(int a, int b);

/* function that prints the numbers, from 0 to 9, followed by a new line */

void print_numbers(void);

/* function that prints the numbers, from 0 to 9, followed by a new line. */

void print_most_numbers(void);

/* function that prints 10 times the numbers, from 0 to 14, followed by a new line */

void more_numbers(void);

/* function that draws a straight line in the terminal. */

void print_line(int n);

/* unction that draws a diagonal line on the terminal. */

void print_diagonal(int n);

/* function that prints a square, followed by a new line. */

void print_square(int size);

/* function that prints a triangle, followed by a new line. */

void print_triangle(int size);

/* function that prints an integer. */

void print_number(int n);

#endif /* MAIN_H */
