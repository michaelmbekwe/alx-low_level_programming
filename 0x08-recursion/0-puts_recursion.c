#include <stdio.h>

/**
 * _puts_recursion - calculates recursion for string
 * @s: is the string
 *
 * Return: Always 0
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		/* Base case: end of string, print a new line */
		putchar ('\n');
		return;
	}
	putchar (*s);
	_puts_recursion(s + 1);
}
