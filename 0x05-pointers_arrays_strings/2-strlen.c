#include "main.h"
#include <string.h>
/**
 * _strlen - give back the length of string
 * @s: string
 * Return: 0
 */
int _strlen(char *s)
{
	int len;
	
	char s[] = "amanuel";
	len = strlen(s);
	
	printf("the length of the string: %d\n", len);
	return (0);
}
