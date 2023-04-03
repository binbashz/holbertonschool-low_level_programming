#include "main.h"
#include <stdlib.h>

/**
  * free_grid - frees a 2D grid previously created by alloc_grid function.
  * @grid: 2D grid to free.
  * @height: Number of columns of the grid.
  *
  */

void free_grid(int **grid, int height)
{
	int m;

	for (m = 0; m < height; m++)
		free(grid[m]);
	free(grid);
}
