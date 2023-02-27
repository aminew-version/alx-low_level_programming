#include "main.h"
/**
 * puts_half - prints second half of string
 * @str: given string
 * Return:
 */
void puts_half(char *str)
{
	int string = 0, l;

	while (str[string] != '\0')
		string++;
		if (string + 1 % 2 != '0')
			l = (string - 1) / 2;
		else
			l = (string / 2);
			l++;
			for (string = l; str[string] != '\0'; string++)
			_putchar(str[string]);
			_putchar('\n');
}
