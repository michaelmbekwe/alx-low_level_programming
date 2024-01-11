#include <stdio.h>
/**
 * _print_rev_recursion - prints letters in reverse
 * @s: is character passed
 * Return: Always 0
 */



void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return; /* Base case; ending of a string */
	}
	_print_rev_recursion(s + 1); /* recursive call */

		printf("%c", *s); /* print the current xter */
}
