#include "main.h"

/**
 * main - check the code
 *print_alphabet - Prints the alphabet in lowercase.
 * Return: Always void.
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 97; ch <= 122; ch++)
		_putchar(ch);
	_putchar('\n');
}
