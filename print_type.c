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
	int count;
	char *str = va_arg(arg, char*);

	if (str == NULL)
		str = "(null)";
	for (count = 0; str[count]; count++)
		_putchar(str[count]);
	return (count);
}

/**
 * print_number - prints a integer
 * @numero: integer to print
 * Return: void
 */
void print_number(int numero)
{
	unsigned int numero_neg;

	if (numero < 0)
	{
		_putchar('-');
		numero_neg = -numero;
	}
	else
	{
		numero_neg = numero;
	}
	if (numero_neg / 10)
	{
		print_number(numero_neg / 10);
		_putchar((numero_neg % 10) + '0');
	}
}

/**
 * print_int - prints an integer
 * @l: va_list of arguments from _printf
 * @f: pointer to the struct flags determining
 * if a flag is passed to _printf
 * Return: number of char printed
 */
int print_int(va_list l, flags_t *f)
{
	int numero = va_arg(l, int);
	int r	= count_digit(n);

	if (f->space == 1 && f->plus == 0 && numero >= 0)
		r += _putchar(' ');
	if (f->plus == 1 && numero >= 0)
		r += _putchar('+');
	if (n <= 0){
		r++;
	unsigned int num_neg;
	if (numero < 0)
	{
		_putchar('-');
		num_neg = -numero;
	}
	else{
		num_neg = numero;
	}
	if (n1 / 10){
		print_number(n1 / 10);
	_putchar((n1 % 10) + '0');
	}
	return (res);
}
}
