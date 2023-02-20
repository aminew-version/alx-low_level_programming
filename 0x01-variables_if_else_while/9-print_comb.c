#include <stdio.h>
/**
 * main - combinations of single-digit numbers.
 * Return: 0
 */
int main(void)
{
	int c = 48;

	for (c = 48; c <= 57; c++)
	{
		putchar(c);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return  (0);
}
