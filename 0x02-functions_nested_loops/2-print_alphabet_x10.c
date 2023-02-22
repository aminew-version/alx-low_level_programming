#include "main.h"
/**
 * print_alphabet_x10 - function print 10 times lowercase
 * Return
 */
void print_alphabet_x10(void)
{
	int cu;

	cu = 0;

	while (cu < 10)
	{
		char c;

		c = 'a';

		for (c = 'a'; c <= 'z'; c++)
		{
		_putchar(c);
		}
		_putchar('\n');
		cu++;
	}
	_putchar('\n');
}
