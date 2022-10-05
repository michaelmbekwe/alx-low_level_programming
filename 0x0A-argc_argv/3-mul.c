#include <stdio.h>
#include <stdlib.h>
/**
 * main - Write a program that multiplies two numbers
 * @argc: counts of arguments supplied to the program
 * @argv: arrays of pointers to the strings
 * Return: 0 always successful
 */

int main(int argc, char *argv[])

{

if (argc != 3)
{
	printf("Error\n");
			return (1);
}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}

