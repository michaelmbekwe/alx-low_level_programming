#include <stdio.h>

/**
 *main - begins
 *@argc: counts
 *@argv: vector
 *Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("error\n");
		return (1);
	}
	{

	int num1;
	int num2;
	int result;

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);
	return (0);
	}
}

