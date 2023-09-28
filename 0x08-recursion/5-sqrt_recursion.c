#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion_hlp - function performs a binary search
 * @n: number to square
 * @l: lower value
 * @h: high value
 *
 * Return: the resuls
 */
int _sqrt_recursion_hlp(int n, int l, int h)
{
	int j = 0;
	int sqr = 0;

	if (l > h)
		return (h);

	j = l + (h - l) / 2;
	sqr = j * j;

	if (sqr == n)
		return (j);

	if (sqr < n)
	return (_sqrt_recursion_hlp(n, j + 1, h));
	else
	return (_sqrt_recursion_hlp(n, l, j - 1));
}
/**
 *_sqrt_recursion - recurses to find the natural square root of a number
 * @n: number to calculate the sqaure root of
 *
 * Return: the resuls
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt_recursion_hlp(n, 0, n / 2));
}
