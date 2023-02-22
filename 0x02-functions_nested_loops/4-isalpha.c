#include "main.h"
/**
 * _isalpha - determine wheather lowercase or uppercase
 *
 * @c: the letter
 * Return: 1 or 0
 */
int _isalpha(int c)
{
	if (c <= 'z' || c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
