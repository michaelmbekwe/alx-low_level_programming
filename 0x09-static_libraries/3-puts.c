
#include <stdio.h>
#include "main.h"
/**
  * _puts - Prints a string
  * @str: The string to print
  *
  * Return: void
  */
void _puts(char *s)
{
	for (; *s != '\0'; s++)
	{
		_putchar(*s);
	}

	_putchar('\n');
}
