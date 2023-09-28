#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate squart of
 *
 * Return: the resulting square n
 */
int _sqrt_recursion(int n)
{
	int j = 0;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	j = _sqrt_recursion(n - 1) + 1;
	if (j * j > n)
	{
	return (j - 1);
	}
	return (j);
}
