#include "main.h"
/**
 * print_line - print lines
 * @n: number of character _ repeat
 * Return: 0
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		i = 1;

		while (i <= n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
