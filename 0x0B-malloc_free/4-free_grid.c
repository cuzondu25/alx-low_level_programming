#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * free_grid - free grid
 * @grid: gride
 * @height: height
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	 free(grid);
}
