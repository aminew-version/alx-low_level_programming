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
    int y;

    for (y = 0; src[y] != '\0' && y < n, y++, x++)
    {
        dest[x] = src[y];
    }
    dest[x] = '\0';
    return (dest);
}
