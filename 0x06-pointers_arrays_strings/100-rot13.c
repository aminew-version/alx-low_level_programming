#include "main.h"
/**
 * rot13 - encode string using root13
 * @st: string
 *
 * Return: char
 */
char *rot13(char *st)
{
	int l = 0;

	int m = 0;

	char nor[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (st[l] != '\0')
	{
		while (nor[m] != '\0')
		{
			if (st[l] == nor[m])
			{
				st[l] = rot[m];
			}
			m++;
		}
		l++;
	}

	return (st);
}
