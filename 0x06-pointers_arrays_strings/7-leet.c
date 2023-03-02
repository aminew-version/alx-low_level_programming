#include "main.h"
/**
 * leet - encodes string in to 1337
 * @st: aray of string
 * Return: 0
 */
char *leet(char *st)
{
	int x, y;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (x = 0; st[x] != '\0'; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (st[x] == s1[y])
			{
				st[x] = s2[y];
			}
		}
	}
	return (st);
}
