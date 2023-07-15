#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - prints a string in a reverse sytle
 * @s: is the parameter that is passed
 * return: success
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	putchar(*s);
}
