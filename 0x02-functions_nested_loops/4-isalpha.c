#include "main.h"

/**
 * _isalpha - is used to check for alphabetic character.
 * @c: - is the parameter used.
 * Return: it returns 1 if c is a alphabet, and 0 otherwise.
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))

	{
		return (1);
	}

		else
	{

		return (0);

	}
	_putchar('\n');
}
