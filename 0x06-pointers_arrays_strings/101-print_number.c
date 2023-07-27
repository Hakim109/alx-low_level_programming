#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The integer to be printed
 */
void print_number(int n)
{
	int divisor = 1;
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

	while (temp / divisor >= 10)
		divisor *= 10;

	while (divisor != 0)
	{
		digit = (temp / divisor);
		_putchar(digit + '0');
		temp %= divisor;
		divisor /= 10;
	}
}

