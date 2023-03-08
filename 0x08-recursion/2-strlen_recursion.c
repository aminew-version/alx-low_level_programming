#include "main.h"
/**
 * _strlen_recursion - returns the length of string'
 * @m: string
 * Return: 0
 */
int _strlen_recursion(char *m)
{
	if (*m == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(m + 1));
	return (0);
}
