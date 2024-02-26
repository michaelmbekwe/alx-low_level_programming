#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *is_valid_input - is a program that multiply two positive numbers
 *@num: is a opointer to char
 *Return: success
 */

int is_valid_input(char *num)
{
	while (*num != '\0')
	{
		if (!isdigit(*num))
		{
			return (0);
		}
		num++;
	}
	return (1);
}

/**
 *multiply - function that carries out multiplication
 *@num1:number 1
 *@num2:number 2
 *Return: always success
 *
 */

int multiply(char *num1, char *num2)
{
	return (atoi(num1) * atoi(num2));
}

/**
 *main - main function
 *@argc:argument count
 *@argv:argument vector
 *Return: always success
 */

int main(int argc, char *argv[])
{
	char *num1, *num2;
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	num1 = argv[1];
	num2 = argv[2];

	if (!(is_valid_input(num1) && is_valid_input(num2)))
	{
		printf("Error\n");
		return (98);
	}

	result = multiply(num1, num2);
	printf("%d\n", result);

	return (0);
}
