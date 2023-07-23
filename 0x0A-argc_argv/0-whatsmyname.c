#include <stdio.h>
#include <string.h>

/**
 *main - is the entry point
 *@argc: is the argument count
 *@argv: is the argument vector
 *Return: always 0 indicating successful
 */
int main(int argc, char *argv[])
{
	(void)argc;
	{

	/*char *programName = argv[0];*/

	/*char *lastSlash = strrchr(programName, '/');*/

	if (argc > 0)
	{
	printf(" %s\n", argv[0]);
	}
	return (0);
}
}
