#include "main.h"
/**
 * cap_string - captilize all
 * Return: char
 */
char *cap_string(char *)
{
	int i;

	char a[1024];

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] = 32 && a[i] = 10 && a[i] = 44 && a[i] = 59 && a[i] = 46 && a[i] = 33 && a[i] = 63 && a[i] = 34 && a[i] = 40 && a[i] = 41 && a[i] = 123 && a[i] = 125)
		{
			if(a[i + 1] >= 'a' && a[i + 1] <= 'z')
				a[i + 1] = a[i + 1] - 32;
		}
		return (a[i]);
	}
}
