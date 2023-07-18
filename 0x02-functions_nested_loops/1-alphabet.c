#include "main.h"

/**
 * 
 * print_alphabet - print alphabet using _putchar.
 * 
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 97; ch <= 122; ch++)
		_putchar(ch);
	_putchar('\n');
}
