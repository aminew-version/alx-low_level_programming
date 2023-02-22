#include "main.h"
/**
 * print_to_98 - print natural numbers upto 98
 * @n: number input
 * Return: 0
 */
void print_to_98(int n)
{
	int x = 98;
	if (n < 98)
	{
		while (n <= 98)
		{
			_putchar(n);
		if (n != 98)
		{
			_putchar(',');
		}
		n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			_putchar(n);
			if (n != 98)
			{
				_putchar(',');
			}
			n--;
		}
	}
	else
	{
		_putchar(x);
	}
		_putchar('\n');
}
