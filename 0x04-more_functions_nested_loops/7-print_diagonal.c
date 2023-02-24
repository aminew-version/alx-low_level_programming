#include "main.h"
/**
 * print_diagonal - prints diagonal
 * @n: number of bacslash used
 * Return:
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int i = 1;

		while (i <= n)
		{
			 int j = 1;

			_putchar('\\');
			_putchar('\n');
			while (j <= i)
			{
				_putchar(' ');
				j++;
			}
			i++;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
