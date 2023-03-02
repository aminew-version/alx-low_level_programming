#include "main.h"
/**
 * cap_string - captilize all
 * Return: char
 */
char *cap_string(char *st)
{
	int x, y;

	char separetor[20] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (x = 0; st[x] != '\0'; x++)
	{
		if (x == 0 && st[x] >= 'a' && st[x] <= 'z')
			st[x] -= 32;

		for (y = 0; y < 13; y++)
		{
			if (st[x] == separetor[y])
			{
				if (st[x + 1] >= 'a' && st[x + 1] <= 'z')
				{
					st[x + 1] -= 32;
				}
			}
		}
	}

	return (st);
}
