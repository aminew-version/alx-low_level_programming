#include "main.h"
/**
 * _isdigit - checks for digits
 * @c: value of the input
 * Return: 1 if true, 0 if not digit
 */
int _isdigit(int c)
{
	if (c <= 57 && c >= 48)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
