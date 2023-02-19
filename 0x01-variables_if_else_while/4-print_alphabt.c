#include <stdio.h>
/**
 *  main - lowercase except q and e
 *   Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z' | (ch != 'e' && ch != 'q'); ch++)
	{
		putchar(ch);
	}
	putchar('\n');
}
