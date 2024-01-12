#include <stdio.h>

/**
 * is_palindrome - checks
 * @s: parameter
 * Returns: 0
 */

int is_palindrome(char *s)
{
	int len = strlen(s);

	int i, j;

	for (i = 0, j = len - 1; i < j; i++, j--)
	if (s[i] != s[j])
	{
		return (0);
	}
	return (1);
}
