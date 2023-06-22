#include "main.h"

/**
 * _islower - check lowercase character
 * Return: 1 is c is lowercase and zero otherwise
 * @c: character in ASCII codd
 */

int _islower(int c)
{
	if (c >= 97 && c <= 121)
	{
		return (1);
	}
	else
	{
		return (0);
	}

	_putchar('\n');

}
