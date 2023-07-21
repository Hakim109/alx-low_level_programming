#include "main.h"

/**
 * print_line - Display a dash line using  _.
 *
 * @n: The number of _ characters to be printed.
 * Example :
 * 
 */

void print_line(int n)
{
	int c;

	if (n > 0)
	{
		for (c = 0; c < n; c++)
			_putchar('_');
	}
	_putchar('\n');
}
