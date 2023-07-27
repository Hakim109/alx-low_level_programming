#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The integer to be printed
 */
void print_number(int n)
{
	int d = 1;/*divisor*/
	int temp = n;
	int digit;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n < 0)
	{
		_putchar('-');
		temp = -n;
	}

	while (temp / d >= 10)
		d *= 10;

	while (d != 0)
	{
		digit = (temp / d);
		_putchar(digit + '0');
		temp %= d;
		d /= 10;
	}
}

