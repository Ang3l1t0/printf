/**
 * print_int - prints a number
 * @n: number to print
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
        else{
                numero_neg = numero;
        }
        if (numero_neg / 10){
                print_number(numero_neg / 10);
        _putchar((numero_neg % 10) + '0');
        }
}

/**
 * print_int_Number - prints an number integer
 * @l: va_list of arguments from the function _printf
 * @f: pointer to the struct flags determining
 * if a flag is passed to the function _printf
 * Return: number of char printed
 */
int print_int_Number(va_list l, flags_Validator *f)
{
	int number = va_arg(l, int);
	int r	= counter(number);

	if (f->space == 1 && f->plus == 0 && number >= 0){
		r += _putchar(' ');
	}
	if (f->plus == 1 && number >= 0){
		r += _putchar('+');
	}
	if (number <= 0){
		r++;
	}
	print_number(number);
	return (r);
}

/**
 * counter - returns the number of digits in an integer
 * @i: integer 
 * Return: number of digits
 */
int counter(int i)
{
	unsigned int digit = 0;
	unsigned int a;

	if (i < 0)
		a = i * -1;
	else
		a = i;
	while (a != 0)
	{
		a /= 10;
		digit++;
	}
	return (digit);
}
/**
 * Switch_flag - turns on flags if _printf finds
 * a flag character
 * @s: character that holds the flag specifier
 * @f: pointer to the struct flags in which we turn the flags on
 *
 * Return: 1 if a flag has been turned on, 0 otherwise
 */
int switch_flag(char s, flags_Validator *f)
{
	int i = 0;

	switch (s)
	{
		case '+':
			f->plus = 1;
			i = 1;
			break;
		case ' ':
			f->space = 1;
			i = 1;
			break;
		case '#':
			f->hash = 1;
			i = 1;
			break;
	}

	return (i);
}
