#include "main.h"
/**
 * leet - encodes string in to 1337
 * @s: aray of string
 * Return: 0
 */
char *leet(char *st)
{
	int x = 0;
	int y = 0;

	char arry1[] = "aAeEoOtTlL";
	char arry2[] = "4433007711";

	while (st[x] != '\0')
	{
		while (y < 10)
		{
			if (st[x] == arry1[y])
			{
				st[x] = arry2[y];
			}
			y++;
		}
		x++;
	}
	return (st);
}
