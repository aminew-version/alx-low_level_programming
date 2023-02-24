#include "main.h"
/**
 * more_numbers - function which print 0-14
 * Return: 0
 */
void more_numbers(void)
{
	int x = 0;

	while (x < 10)
	{
		int c = 0;

		while (c < 15)
		{
			while (c >= 10)
			{
				_putchar((c / 10) + '0');
			}
			_putchar((c % 10) + '0');
		}
		_putchar('\n');
	}
}
