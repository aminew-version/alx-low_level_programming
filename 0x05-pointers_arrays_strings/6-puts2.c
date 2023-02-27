#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: string
 * Return:
 */
void puts2(char *str)
{
	int x, i;

	x = 0;

	while (str[x] != '\0')
	{
		x++;
	}
		for (i = 0; i < x; i += 2)
		{
			putchar(str[i]);
		}
	putchar('\n');
}
