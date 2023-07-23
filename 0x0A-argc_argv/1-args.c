#include <stdio.h>
#include "main.h"

/**
 *main - tkes in two parameters
 *@argc: argument count
 *@argv: argument vector
 *Return: 0 indicating success
 */

int main(int argc, char *argv[])
{
	{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
	}
}
