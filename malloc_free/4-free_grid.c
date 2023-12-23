#include "main.h"

/**
 * free_grid -  frees array from a previous function.
 * @grid: pointer to an array of ints
 * @height: quantity of rows in the array
 */
void free_grid(int **grid, int height)
{
	int x;

	x = 0;
	while (x < height)
	{
		free(grid[x]);
		x++;
	}
	free(grid);
}
