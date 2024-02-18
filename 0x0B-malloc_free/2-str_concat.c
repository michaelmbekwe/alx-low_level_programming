#include <stdlib.h>
#include <string.h>

/**
 *str_concat - a function that concatenates two strings
 *@s1: pointer to string 1
 *@s2: pointer to string 2
 *Return: 0 Always succesful
 */

char *str_concat(char *s1, char *s2)
{
	char *result;
	size_t len_s1, len_s2;

	if (s1 == NULL)
	{
	s1 = "";
	}

	if (s2 == NULL)
	{
	s2 = "";
	}

	len_s1 = strlen(s1);
	len_s2 = strlen(s2);

	result = (char *)malloc(len_s1 + len_s2 + 1);
	if (result == NULL)
	{
		return (NULL);
	}

	strcpy(result, s1);
	strcpy(result + len_s1, s2);

	return (result);
}
