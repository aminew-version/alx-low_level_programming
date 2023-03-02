#include "main.h"
/**
 * _strncpy - copy source string to destination string at most
 * @dest: destination
 * @src: source
 * @n: number of bytes going to copy
 *
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	x = 0;
	while (x < n && src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}

	return (dest);
}
