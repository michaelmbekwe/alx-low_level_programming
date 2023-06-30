#include <stdio.h>

/**
* _strcat - a function that appends two strings
* @dest: the destination string
* @src: the source string
* Return: success
*/

char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	/* find the end of the string*/
	while (*ptr != '\0')
	{
		ptr++;
	}

	/* copy the source string to the end of the destination string*/
	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}

	/* add a terminating null byte*/
	*ptr = '\0';

	return (dest);
}


