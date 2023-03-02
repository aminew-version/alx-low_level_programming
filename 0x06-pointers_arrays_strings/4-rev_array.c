#include "main.h"
/**
 * reverse_array - reverse array
 * @a: array name
 * @n: number of elements of array
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int temp = 0;

	int j = n - 1;

	for (int i = 0; i < (n / 2); i++)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
