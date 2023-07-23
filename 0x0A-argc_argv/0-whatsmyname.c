#include <stdio.h>
#include <string.h>

/**
 *main - is the entry point
 *@argc: is the argument count
 *@argv: is the argument vector
 *Return: always 0 indicating success
 */
int main(int argc, char *argv[])
{
	(void)argc;
	{

	char *programName = argv[0];

	char *lastSlash = strrchr(programName, '/');

	if (lastSlash != NULL)
	{
		programName = lastSlash + 1;
	}

	printf(" %s\n", programName);
	}
	return (0);
}
