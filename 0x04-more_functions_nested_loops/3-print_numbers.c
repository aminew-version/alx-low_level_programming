#include "main.h"
/**
 * print_numbers - function which print 0-9
 * Return: 0
 */
void print_numbers(void)
{
	char c;

	c = 48;

	while (c <= 57)
	{
		_putchar(c);
		c++;
	}
		_putchar('\n');
}
