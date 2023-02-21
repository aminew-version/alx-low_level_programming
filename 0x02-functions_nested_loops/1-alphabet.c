#include "main.h"
/**
 * main - Prototype: void print_alphabet(void);
 * Return: 0
 */
void print_alphabet(void);
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
