#include <stdio.h>
#include "main.h"

/**
 *_pow_recursion - is a function that calculate number raised to power
 *@x: is the number
 *@y: is the power raised
 *Return: 0
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
{
	return (-1);
}
	else if (y == 0)
{
	return (1);
}
else
{
	return (x * _pow_recursion(x, y - 1));
			}
			}
