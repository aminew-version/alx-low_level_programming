#include "main.h"
/**
 * factorial - prints factorial of a number
 * @n: number
 * Return: 0
 */
int factorial(int a)
{
	if (a == 0)
	{
		return (1);
	}
	if (a == 1)
	{
		return (1);
	}
	if (a < 0)
	{
		return (-1);
	}
	return (a * factorial(a - 1));
}
