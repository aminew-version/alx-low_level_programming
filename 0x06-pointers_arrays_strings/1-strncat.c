#include "main.h"
/**
 * _strncat - concatenate two strings
 * @dest: destination string
 * @src: source string
 * @n: number of byte of src
 *
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	int x = 0;

	while (dest[x] != '\0')
	{
		x++;
	}
	int v = 0;

	while (v < n && src[v] != '\0')
	{
		dest[x] = src[v];
		x++;
		v++;
	}
	dest[x] = '\0';
	return (dest);
}
