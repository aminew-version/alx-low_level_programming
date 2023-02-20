#include <stdio.h>
/**
 * main - Sizeof function
 * Return: 0
 */
int main(void)
{
	char ch;
	int  d;
	long int x;
	long long int e;
	float c;

	printf("Size of a char: %lu byte(s)\n", sizeof(ch));
	printf("Size of an int: %lu byte(s)\n", sizeof(d));
	printf("Size of a long int: %lu byte(s)\n", sizeof(x));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(e));
	printf("Size of a float: %lu byte(s)\n", sizeof(c));
	return (0);
}
