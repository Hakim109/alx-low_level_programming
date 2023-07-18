#include "main.h"
/**
* times_table - print 9 time table
*
* Return: always time_table
*/
void times_table(void)
{
	int x = 0, y, z;

	while (x <= 9)
	{
		y = 0;

		while (y <= 9)
		{
			z = x * y;
			if (y != 0)
			{
				_putchar(',');
			}
			if (z < 9)
			{
				_putchar(' ');
				_putchar(' ');
			_putchar(z + '0');
			}
			else
			{
				_putchar(' ');
				_putchar((z / 10) + '0');
			_putchar((z % 10) + '0');
			}
			y++;
		}
		_putchar('\n');
		x++;
	}
}
