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
	int cl, i;

	cl = 0;
	while (src[cl] != '\0')
	{
		cl++;
	}
	for (i = 0; i < cl; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
