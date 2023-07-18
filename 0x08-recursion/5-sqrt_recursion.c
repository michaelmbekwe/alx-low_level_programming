#include <stdio.h>
#include "main.h"

int _sqrt(int n, int i);
/**
 * _sqrt_recursion - returns a natural square root of a number
 * @n: is the number to find square root
 * Return: always 0
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - calculoates natural square root
 * @n: number to calculate the square root
 * @i: iterate number
 * Return: the natural number
 */

int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (i);
	return (_sqrt(n, i + 1));
}
