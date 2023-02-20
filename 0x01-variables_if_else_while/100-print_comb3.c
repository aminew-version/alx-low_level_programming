#include <stdio.h>
/**
 * main - combinations of two single-digit numbers.
 * Return: 0
 */
int main(void)
{
	int c;
	int b;

	for (c = 0; c <= 9; c++)
	{
	for (b = 0; b <= 9; b++)
	{
		if (c < b)
		{
			putchar((c % 10) + '0');
			putchar((b % 10) + '0');
			if (c < 8 && b <9)
			{
			putchar(',');
			putchar(' ');
			}
		}
	}
	}
	putchar('\n');
	return (0);
}
