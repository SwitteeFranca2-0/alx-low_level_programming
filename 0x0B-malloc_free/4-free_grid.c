#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free gird.
 * @grid: grid.
 * @height: height.
 * Return: none.
 */
void free_grid(int **grid, int height)
{
	int k;

	for (k = 0; k < height; k++)
		free(grid[k]);
	free(grid);



}












