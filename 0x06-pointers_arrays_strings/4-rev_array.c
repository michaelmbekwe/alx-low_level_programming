#include <stdio.h>

/**
 * reverse_array - swaps elements of an array
 * @a: is a pointer to the array
 * @n: no of elements in the array
 * Return: 0 success
 */

void reverse_array(int *a, int n)
{
	int i, temp;
	for (i = 0; i < n / 2; i++)
	{

	temp = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = temp;
	}
}
