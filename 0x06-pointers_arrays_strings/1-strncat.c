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

	int v = 0;

	int n;

	while (dest[x] != '\0')
	{
		x++;
	}
	while (v < n)
	{
		dest[x] = src[v];
		x++;
		v++;
	}
	return (dest);
}
