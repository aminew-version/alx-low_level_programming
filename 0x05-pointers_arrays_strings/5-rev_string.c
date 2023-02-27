#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * rev_string - reversing the string
 * @s: string
 * Return:
 */
void rev_string(char *s)
{
	int length;
	int counter;
	int index;
	char comp[1000];

	strcpy(comp, s);

	index = 0;

	if (length > 0)
	{
		for (counter = length - 1; counter >= 0; counter--)
		{
			s[index] = comp[counter];
			index++;
		}
	}
	else
	{
		s[0] = '\0';
	}
}
