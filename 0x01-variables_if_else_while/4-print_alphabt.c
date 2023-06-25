#include <stdio.h>

/**
 * main - entry point of the code
 * Return: 0 (success)
 */

int main(void)
{
int letter = 'a';

while (letter <= 'z')
{
	if (letter != 'q' && letter != 'e')

	putchar(letter);
	{
	letter++;
	}
}
	putchar('\n');

	return (0);

}
