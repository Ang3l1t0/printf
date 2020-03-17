/**
 * print_int - prints a integer
 * @n: integer to print
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


