#ifndef VARI_A_DIC
#define VARI_A_DIC
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);
#endif
