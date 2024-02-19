#include <stdlib.h>
/**
 *free_grid - a function that frees two dimentional grid
 *@grid: deference pointer to pointer
 *@height: height of grid
 *Return: 0 always successful
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL)
	{

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
	}
}
