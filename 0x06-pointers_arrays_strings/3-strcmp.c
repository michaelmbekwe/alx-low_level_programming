#include <stdio.h>

/**
 * _strcmp - a function that compares characters of a string
 * @s1: first string
 * @s2: second string
 * Return: always 0
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
