#include "main.h"
/**
 * main - Prototype: void print_alphabet(void);
 * Return: 0
 */
int main(void)
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
