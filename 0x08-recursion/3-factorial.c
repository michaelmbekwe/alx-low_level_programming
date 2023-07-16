#include <stdio.h>
#include "main.h"

/**
 * factorial - is a fuction that calculates a factorial of a number
 * @n: is the parameter passed
 * Return: success
 */
int factorial(int n)
{
if (n < 0)
{
return (-1); /* to show not successful*/
}
	else if (n == 0)

{
	return (1);
}
else
{
	int result = 1;
	int i;

	for (i = 1; i <= n; ++i)
	{

		result *= i;
	}
	return (result);
}
}
