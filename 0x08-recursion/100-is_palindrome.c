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
	int len = strlen(s);
	int i, j;

	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		if (s[i] != s[j])
			{
			return (0); /* characters don't nmatch, not palindrome*/
			}
	}
	return (1); /* all characters match, it is a palindrome*/
}
