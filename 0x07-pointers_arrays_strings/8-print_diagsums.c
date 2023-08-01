#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Print diagonal sum.
 * @a: array int
 * @size: array size
 */
void print_diagsums(int *a, int size)
{
	int i, j, k, l, m;

	k = 0;
	l = 0;
	m = 0;
	for (i = 0; i < size; i++)
		for (j = 0; j < size; j++)
		{
			if (i == j)
				l += a[k];

			else if (i + j == size - 1)
				m += a[k];

			k++;
		}
	printf("%i, %i\n", l, m);
}
