#include <stdlib.h>
#include <stdio.h>
/**
 *alloc_grid - is a function that returns a pointer to 2 dim array of int
 *@width: width
 *@height: height
 *Return: always 0
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i;
	int j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
		}
		free(grid);
		return (NULL);

}

for (j = 0; j < width; j++)
	{
	grid[i][j] = 0;
	}
return (grid);
}
