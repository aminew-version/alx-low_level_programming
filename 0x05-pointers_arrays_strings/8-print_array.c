#include "main.h"
/**
 * print_array - prints n elements of array
 * @n: number of elements
 * @a: name of array
 *
 * Return:
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		if (j == 0)
		printf("%d", a[j]);
		else
		printf(", %d", a[j]);
	}
		printf("\n");
}
