#include <stdio.h>

/**
 * string_toupper - changes string to upper case
 * @str: the string to work on
 * Return: success
 */

char *string_toupper(char *str)
{
	char *ptr = str;
	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - 32;
		}
		ptr++;
	}
	return (str);
}
