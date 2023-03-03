#include "main.h"
/**
 * print_buffer - prints buffer
 * @b: pointed
 * @size: size bytes
 *
 * Return: 0
 */
void print_buffer(char *b, int size)
{
	int y;

	for (y = 0; y <= (size - 1) / 10 && size; y++)
	{
		printf("%08x: ", y * 10);
		if (y < size / 10)
		{
			print_line(b, 9, y);
		}
		else
		{
			print_line(b, size % 10 - 1, y);
		}
		putchar('\n');
	}
	if (size == 0)
		putchar('\n');
}
