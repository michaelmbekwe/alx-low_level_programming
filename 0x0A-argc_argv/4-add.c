#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 *main - contains two parameters
 *@argc: argument count
 *@argv:argument vector
 *Return: 0 always
 */

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	{
		int sum;
		int i;
		int j;

		sum = 0;

		for (i = 1; i < argc; i++)
		{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
		if (!isdigit(argv[i][j]))
		{
			printf("Error\n");
			return (1);
		}
		}
		{
		int num;

		num = atoi(argv[i]);
		if (num <= 0)
		{
		printf("Error\n");
		return (1);
		}
		sum += num;
		}
		}
		printf("%d\n", sum);

		return (0);
	}
}
