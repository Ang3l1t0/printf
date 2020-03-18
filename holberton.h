#ifndef _HOLBERTON_H
#define _HOLBERTON_H

#include <stdarg.h>
#include <stdlib.h>

/**
 * struct print_format - structure for print
 * @t: type to print
 * @f: function to print
 */

typedef struct print_format
{
	char *t;
	int (*f)();
} pt;

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list arg);
int print_string(va_list arg);
int print_int(va_list i);
int print_dec(va_list d);

#endif
