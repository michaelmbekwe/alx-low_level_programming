#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes here */

/**
 * main - main entry of the code
 * Return: it return 0 which is success
 */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastDigit = n % 10;

	printf("Last digit of %d is %d ", n, lastDigit);

		if (lastDigit > 5)
		{
			printf("and is greater than 5\n");
			}
		else if (lastDigit == 0)
		{
			printf("and is 0\n");
			}
		else
		{
			printf("and is less than 6 and not 0\n");
		}

	return (0);
}
