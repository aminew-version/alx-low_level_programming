#include "main.h"
/**
 * _islower - checks lowercase
 * @c: the name of the variable
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
