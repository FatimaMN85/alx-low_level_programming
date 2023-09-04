#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * free_grid -  frees a 2 dimensional grid
 * @grid: grid
 * @height: the height
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = height - 1; i >= 0; i--)
	{
		free(grid[i]);
	}
	free(grid);
}
