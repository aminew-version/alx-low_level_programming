#include "main.h"
/**
 * _strcat - concatenate two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int x;

	int v;

	while (dest[x] != '\0')
	{
		x++;
	}
	while (src[v] != '\0')
	{
		dest[x] = src[v];
		x++;
		v++;
	}
	dest[x] = ('\0');
	return (dest);
}
