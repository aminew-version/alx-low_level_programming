#include "main.h"
/**
 * print_diagonal - prints diagonal
 * @n: number of bacslash used
 * Return:
 */
void print_diagonal(int n)
{
	int line = 0;
	int spaces;

	if (n > 0)
	{
	while (line < n)
	{
		for (spaces = 0; spaces < line; spaces++)
		{
			_putchar(' ');
		}
			_putchar('\\');
			_putchar('\n');
			line++;
		}
	}
	else
	{
	_putchar('\n');
	}
}
