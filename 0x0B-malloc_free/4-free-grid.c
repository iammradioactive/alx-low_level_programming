#include "main.h"
/**
 * free_grid - free the 2D grid prev created
 * @grid: input pointer
 * @height: height of 2D array
 * Return: void
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
