#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 *string_nconcat - a function that concatenates two strings
 *@s1: string 1
 *@s2: string 2
 *@n: number of bytes
 *Return: 0 success
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len, s2_len, concat_len;
	char *result;

	s1_len = (s1 != NULL) ? strlen(s1) : 0;
	s2_len = (s2 != NULL) ? strlen(s2) : 0;
	concat_len = (n >= s2_len) ? s1_len + s2_len : s1_len + n;

	result = malloc(concat_len + 1);
	if (result == NULL)
	{
		return (NULL);
	}
	if (s1 != NULL)
	{
		strcpy(result, s1);
	}
	else
	{
		result[0] = '\0';
	}
	strncat(result, s2, n);
	result[concat_len] = '\0';

	return (result);
}
