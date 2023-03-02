#include "main.h"
/**
 * print_number - prints numbers
 * @n: intiger
 * Return: 0
 */
void print_number(int n)
{
	unsigned int q, r, count;

	if (n < 0)
	{
		_putchar(45);
		q = n * -1;
	}
	else
	{
		q = n;
	}

	r = q;
	count = 1;

	while (r > 9)
	{
		r /= 10;
		count *= 10;
	}

	for (; count >= 1; count /= 10)
	{
		_putchar(((q / count) % 10) + 48);
	}
}
