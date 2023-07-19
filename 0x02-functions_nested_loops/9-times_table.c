#include "main.h"
/**
* times_table - print 9 time table
*
* Return: always time_table
*/
void times_table(void)
{
	    int x, y, z;

    for (x = 0; x <= 9; x++)
    {
        for (y = 0; y <= 9; y++)
        {
            z = x * y;

            if (y != 0)
            {
                _putchar(',');
                _putchar(' ');
            }

            if (z <= 9)
                _putchar(' ');
            else
                _putchar((z / 10) + '0');

            _putchar((z % 10) + '0');
        }

        _putchar('\n');
    }
}

