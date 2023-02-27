#include "main.h"
/**
 * reset_to_98 - change the value
 * @n: variable that store value
 *
 * Return: 0
 */
void reset_to_98(int *n)
{
	int p = 42;

	int *n = &p;

	n = &p;

	printf("p : %d\n", p);
	*n = 98;

	printf("p : %d\n", p);
	return (0);
}
