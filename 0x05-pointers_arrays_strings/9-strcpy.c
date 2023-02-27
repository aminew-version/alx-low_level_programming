#include "main.h"
/**
 * _strcpy - copy
 * @dest: variable1
 * @src: variable2
 *
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
	int f;

	for (f = 0; src[f] != '\0'; f++)
		dest[f] = src[f];
		dest[f] = '\0';
		return (dest);
}
