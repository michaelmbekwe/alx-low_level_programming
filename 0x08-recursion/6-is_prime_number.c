#include <stdio.h>

/**
 * is_prime_number - checks for prime numbers
 * @n: is the number
 * Return: 0
 */

int is_prime_number(int n)

{
	int i;

	if (n <= 1)
	{
		return (0);
	}
			for (i = 2; i * i <= n; i++)
			{
				if (n % i == 0)
				{
					return (0);
				}
			}
			return (1);
}

