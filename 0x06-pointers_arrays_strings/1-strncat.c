#include <stdio.h>

/**
 * _strncat - a function that concatenate two strings
 * @dest: destination string
 * @src: the source string
 * @n: maximum number of byte to concatenate)
 * Return: success
 */

char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	/* find the end of the destination string*/
	while (*ptr != '\0')
	{
		ptr++;
	}
/* copy at most n bytes from the source string to the end dest string*/
while (*src != '\0' && n > 0)
{
	*ptr = *src;
	ptr++;
	src++;
	n--;
}
/*add a terminating null byte*/
*ptr = '\0';

return (dest);
}
