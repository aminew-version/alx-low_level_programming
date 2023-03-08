#include "main.h"

/**
 * na_sqrt - Function that finds the root of the variable x.
 * @x: The number to analize.
 * @t: The number to find the root
 *
 * Return: Always 0.
 */

int na_sqrt(int x, int t)
{
	if ((t) * (t) == x)
	{
		return (t);
	}
	if (t == x / 2)
	{
		return (-1);
	}
		return (na_sqrt(x, t + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: The given number
 * Return: root of n or -1 if it has no root
 */

int _sqrt_recursion(int n)
{
	int t = 1;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}

		return (na_sqrt(n, t));
}
