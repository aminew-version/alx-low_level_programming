#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * @w: number's last digit result
 * Return: value of the last digit
 */
int print_last_digit(int w)
{
	int q;

	q = (w % 10);

	if (q < 0)
	{
	q = (-1 * q);
	}
	_putchar(q + '0');
	return (q);
}
