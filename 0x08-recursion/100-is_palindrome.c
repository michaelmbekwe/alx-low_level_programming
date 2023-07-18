# include <stdio.h>
# include "main.h"
# include <string.h>

/**
 * is_palindrome - is function that looks for palindrome
 * @s: is the parameter passed
 * Return: always 0
 */

int is_palindrome(char *s)
{
	char *start = s;
	char *end = s + strlen(s) - 1;

	if (*s == '\0')
	{
		return (1);
	}

	while (start < end)
	{
		if (*start != *end)
		{
			return (0);
		}
		start++;
		end--;
	}

	return (1);
}
