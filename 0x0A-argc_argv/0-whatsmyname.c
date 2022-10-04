#include <stdio.h>

/**
 * main - a program that print the new line name
 * without having to compile it again
 * @argc: number of argument in the command line
 * @argv: pointer to the array of argc
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
