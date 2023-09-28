#include "main.h"

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
	for (j = 1; j <= n / 2; j++)
	{
		if (j * j > n)
			return (-1);
		if (j * j == n)
			return (j);
	}
		return (j - 1);
}
