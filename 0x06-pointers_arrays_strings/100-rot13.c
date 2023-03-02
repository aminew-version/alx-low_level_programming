#include "main.h"
/**
 * rot13 - encode string using root13
 * @st: string
 *
 * Return: char
 */
char *rot13(char *st)
{
	int x;
	int y;

	char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; st[x] != '\0'; x++)
	{
		for (y = 0; s1[y] != '\0'; y++)
		{
			if (st[x] == s1[y])
			{
				st[x] = s2[y];
				break;
			}
		}
	}

	return (st);
}
