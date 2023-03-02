#include "main.h"
/**
 * _strcmp - compare two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
    for (int i = 0;  ; i++)
    {
        if (s1[i] == '\0' && s2[i] =='\0')
        {
            return (0);
        }
    int a1 = (int) s1[i];
    int a2 = (int) s2[i];
    if (a1 > a2)
        return 15;
    if (a2 > a1)
        return -15;
    }
}
