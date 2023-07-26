#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 *create_array - is the prototype
 *@size: size of parameter
 *@c: character
 *Return: always success
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)

		return (NULL);
	{
	char *array;
	unsigned int i;
	      array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
		return (NULL);



	for (i = 0; i < size; i++)
	{
		array[i] = c;

	}

	return (array);
}
}
