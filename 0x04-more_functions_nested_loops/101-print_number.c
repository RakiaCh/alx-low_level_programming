#include "main.h"

/**
 * print_number - print an integer, without using long, arrays, or pointers
 * @n: number to be printed
 */

void print_number(int n) {
    if (n < 0) {
        _putchar('-');
        n = -n;
    }

    int divisor = 1;
    while (divisor <= n / 10) {
        divisor *= 10;
    }

    while (divisor > 0) {
        int digit = n / divisor;
        _putchar('0' + digit);
        n %= divisor;
        divisor /= 10;
    }
}

