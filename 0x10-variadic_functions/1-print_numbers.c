#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers
 * @separator: separator betwin arg
 * @n: The number of arg in fonction.
 * @...: A variable numbers to be printed.
 */

void print_numbers(const char *separator, const unsigned int n, ...)

{
	va_list nums;
	unsigned int index = 0;

	va_start(nums, n);

	while (index < n)
	{
		printf("%d", va_arg(nums, int));

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
		index++;
	}

	printf("\n");

	va_end(nums);
}
