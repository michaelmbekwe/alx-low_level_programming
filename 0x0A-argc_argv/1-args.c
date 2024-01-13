#include <stdio.h>

/**
 *main - where the program starts
 *@argc: command line count
 *@argv: command line vector
 *Return: 0
 */

int main(int argc, char *argv[])
{
	{
		(void) argv;
		printf("%d\n", argc - 1);
		return (0);
	}
}
