#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>

/* _putchar : writes the character c to stdout */

int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);

#endif /* MAIN_H */
