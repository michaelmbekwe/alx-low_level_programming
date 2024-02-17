#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - dynamically allocate memorry to array of xterer
 * @size: size of the array to be created
 * @c: caracter initiallizing each elements
 * Return: 0, always success
 */

char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;

if (size == 0)
{
	return (NULL);
}

array = (char *)malloc(size * sizeof(char));

if (array == NULL)
{
	return (NULL);
}
for (i = 0; i < size; i++)
{
	array[i] = c;
}
return (array);
}
