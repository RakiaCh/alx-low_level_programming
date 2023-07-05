#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>

/* _putchar : writes the character c to stdout */

int _putchar(char c);

/* function that prints a string, followed by a new line. */

void _puts_recursion(char *s);

/* function that prints a string in reverse. */

void _print_rev_recursion(char *s);

/* function that returns the length of a string. */

int _strlen_recursion(char *s);

/* function that returns the factorial of a given number. */

int factorial(int n);

/* function that returns the value of x raised to the power of y */

int _pow_recursion(int x, int y);

/* function that returns the natural square root of a number. */

int is_sqrt(int n, int i);

int _sqrt_recursion(int n);

/* function that returns 1 if the input integer is a prime number, otherwise return 0 */

int is_prime(int n, int divisor);

int is_prime_number(int n);

/* function that returns 1 if a string is a palindrome and 0 if not. */

int compare(char *head, char *tail);

int is_palindrome(char *s);

/* unction that compares two strings and returns 1 if the strings can be considered identical, otherwise return 0 */

int wildcmp(char *s1, char *s2);

#endif /* MAIN_H */
