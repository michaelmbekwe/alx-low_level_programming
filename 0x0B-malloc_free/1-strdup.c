#include <stdlib.h>
#include <string.h>

/**
 *_strdup - is a function that returns a pointer to a newly all. space
 *@str: string to be duplicated
 *Return: 0, always successful
 */

char *_strdup(const char *str)
{
	char *duplicate

	if (str == NULL)
	{
		return (NULL);
	}

	duplicate = (char *)malloc(strlen(str) + 1);

	if (duplicate == NULL)
	{
		return (NULL);
	}
	strcpy(duplicate, str);

	return (duplicate);
}
