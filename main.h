#ifndef MAIN_H
#define MAIN_H

#include "main.h"
#include <limits.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * struct print_all - define structure for functions.
 * @p : pointer
 * @f: function
 */
typedef struct print_all
{
	char *p;
	void (*f)(va_list);
} pr_t;

int _printf(const char *format, ...);
int _printf_char(va_list args);
int _printf_percent(void);
int _printf_unknown(va_list args);
int _putchar(char c);
void print_max_min(int m);
int len_checker(int n);
int print_int(va_list args);
char _printf_str(va_list args);

#endif
