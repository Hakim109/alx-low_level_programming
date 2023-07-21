#include "main.h"
/**
 * print_most_numbers - a function that prints numbers from 0-9
 *
 * Return: 0-9, excluding 2 and 4, following by new line
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 0 && i !=4)
			_putchar(i + '0');
	}
	_putchar('\n');
}
