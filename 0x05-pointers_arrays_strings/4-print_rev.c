#include "main.h"
#include <string.h>
/**
 * print_rev - prints string in reverse order
 * @s: string provided
 * Return:
 */
void print_rev(char *s)
{
	int length;
	int counter;
	int index;
	char reversed[500];

	length = strlen(s);
	index = 0;

	if (length > 0)
	{
		for (counter = length - 1; counter >= 0; counter--)
		{
			reversed[index] = s[counter];
			index++;
		}
		puts(reversed);
	}
	else
	{
		puts("\0");
	}
}
