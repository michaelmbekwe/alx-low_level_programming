#include <stdio.h>

/**
 * main - A program that prints all arguments it receives
 * @argc: number of arguments in the program
 * @argv: arrays of characters in the
 * Return: 0 always successfull
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)

		printf("%s\n", argv[i]);

	return (0);
}

