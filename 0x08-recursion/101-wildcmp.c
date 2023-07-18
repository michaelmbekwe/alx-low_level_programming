#include <stdio.h>
#include "main.h"

/**
 * wildcmp - is the function
 * @s1: first parameter
 * @s2: second parameter
 * return: always 0
 */



int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s1 == *s2 || *s2 == '*')
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}


	if (*s2 == '*')
	{
	return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}

	/* strings are different not identical */
	return (0);
}
