#include "main.h"
/**
 * swap_int - interchang the values of a and b
 * @a: first number
 * @b: second number
 *
 * Return:
 */
void swap_int(int *a, int *b)
{
	int first_num;
	int second_num;

	first_num = *a;
	second_num = *b;

	*a = *(&second_num);
	*b = *(&first_num);
}
