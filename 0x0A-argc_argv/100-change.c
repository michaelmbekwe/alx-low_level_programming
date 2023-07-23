#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *main - takes two parameters
 *@argc:arguments counts
 *@argv: argument vector
 *Return: 0 always succeset number
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
	printf("Error\n");
	return (1);
	}
	{
	int cents;

	cents = atoi(argv[1]);
	if (cents < 0)
	{
	printf("0\n");
	return (0);
	}
	{

	int num_coins;
	int total_coins;
	int i;

	int coins[] = {25, 10, 5, 2, 1};

	num_coins = sizeof(coins) / sizeof(coins[0]);
	total_coins = 0;

	for (i = 0; i < num_coins; i++)
	{
	total_coins += cents / coins[i];
	cents %= coins[i];
	}

	printf("%d\n", total_coins);

	return (0);
}
}
}
