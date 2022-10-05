#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints the number of arguments passed into it
 * followed by a new line
 * @argc: number of argument passed to the command
 * @argv: pointer array to the string
 * Return: Always 0 is successfull
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
