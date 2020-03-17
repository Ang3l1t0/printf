#include "holberton.h"

/**
 * print_char - print a char
 * @arg: argument to print
 * Return: always 1.
 */
int print_char(va_list arg)
{
	char ch = (char)va_arg(arg, int);

	_putchar (ch);
	return (1);
}

/**
 * print_string - prints a string
 * @arg: argument to print
 * Return: i, number of char printed
 */
int print_string(va_list arg)
{
	int i;
	char *str = va_arg(arg, char*);

	if (str == NULL)
		str = "(NULL)";
	for (i = 0; str[i]; i++)
		_putchar(str[i]);
	return (i);
}
