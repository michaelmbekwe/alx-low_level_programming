#include <stdio.h>
#include "main.h"

/**
 *main - contains two parameters
 *@argc: argument count
 *@argv: the argument vector
 *Return: (0) success
 */

int main(int argc, char *argv[])

{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
return (0);
}