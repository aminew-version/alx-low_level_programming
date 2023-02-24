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
	char c = '48';
	
	char b = '49';
	
	if (c >= 'A' && c <= 'Z')
	{
		_putchar(b);
	}
	else
	{
		_putchar(c);
	}
	return (0);
}
