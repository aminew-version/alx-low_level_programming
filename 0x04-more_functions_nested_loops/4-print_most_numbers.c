#include "main.h"
/**
 * print_most_numbers - block of statement print 0-9 except 2 and 4
 * Return: 0
 */
void print_most_numbers(void)
{
	char c;

	c = 48;

	while (c <= 57)
	{
		if (c != 50 && c != 52)
		{
		_putchar(c);
		}
		c++;
	}
		_putchar('\n');
}
