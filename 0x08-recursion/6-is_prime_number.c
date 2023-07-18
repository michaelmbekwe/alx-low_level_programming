#include <stdio.h>
#include "main.h"

/**
 * is_prime_number - is a fuction that checks prime number
 * @n: is the number to be checked
 * Return: always 0
 */

int is_prime_number(int n)
{
	int i;

	if (n <= 1)
	{
		return (0); /* 0 and 1 not prime numbers */
	}

	for (i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			return (0); /* found a divisor */
		}
	}
	return (1); /* no divisor found */
}
