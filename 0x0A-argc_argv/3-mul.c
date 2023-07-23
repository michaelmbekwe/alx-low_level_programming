#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 *main - contains two parameters
 *@argc: argument count
 *@argv: argument vectors
 *Return: 1 for unsuccess and 0 for success
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");

	return (1);
}

{

int num1;
int num2;
int result;

num1 = atoi(argv[1]);
num2 = atoi(argv[2]);

result = num1 *num2;

printf("%d\n", result);

return (0);
}
}

