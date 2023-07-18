# include <stdio.h>
# include "main.h"
# include <string.h>

/**
 * is_palindrome_helper - is a helper function
 * @s: is the parameter passed
 * Return: always 0
 * @start: is the initial
 * @end: is the terminal
 */

int is_palindrome_helper(char *s, int start, int end)
	{
	if (start >= end)
	{
	return (1);
	}
	if (s[start] != s[end])
	{
	return (0);  /* Not a palindrome */
	}

	return (is_palindrome_helper(s, start + 1, end - 1));
}

/**
 * is_palindrome - is function that looks for palindrome
 * @s: the string to be checked
 * Return: 1 if the string is a palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	int length = strlen(s);

	return (is_palindrome_helper(s, 0, length - 1));
}
