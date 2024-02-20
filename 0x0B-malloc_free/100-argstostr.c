#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 *argstostr - a function that concatenates all arguments
 *@ac: argument count
 *@av: argument vector
 *Return: 0 always successful
 */

char *argstostr(int ac, char **av)
{
	int i;
	char *result;
	int index;
	int total_length;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	total_length = 0;
	for (i = 0; i < ac; i++)
	{
		total_length += strlen(av[i]) + 1;
	}

	result = (char *)malloc((total_length + 1) * sizeof(char));
	if (result == NULL)
	{
		return (NULL);
	}

	index = 0;
	for (i = 0; i < ac; i++)
	{
		strcpy(result + index, av[i]);
		index += strlen(av[i]);
		result[index++] = '\n';
	}
	result[index] = '\0';
	return (result);
}
