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
	int t, s;

	t = 0;
	s = 0;

	while (dest[t] != '\0')
		t++;

	while (src[s] != '\0' && s < n)
	{
		dest[t] = src[s];
		t++;
		s++;
	}

	dest[t] = '\0';

	return (dest);
}
