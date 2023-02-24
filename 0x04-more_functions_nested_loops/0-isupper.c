#include "main.h"
/**
 * _isupper - prints characters
 *
 * @c: value of the letter
 *
 * Return: 0 or 1
 */
int _isupper(int c)
{
	int d = '48';

	int b = '49';

	if (c >= 'A' && c <= 'Z')
	{
		_putchar(b);
	}
	else
	{
		_putchar(d);
	}
	return (0);
}
