#include "main.h"

/**
 * alloc_grid - returns pointer of array of integers
 * @width: width of array
 * @height: height of array
 * Return: pointer to an array of integers, or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **matrix;
	int row, col;

	if (width == 0 || height == 0)
		return (NULL);

	matrix = malloc(sizeof(int *) * height);
	if (matrix == NULL)
		return (NULL);

	for (row = 0; row < height; row++)
	{
		matrix[row] = malloc(sizeof(int) * width);

		if (matrix[row] == NULL)
		{
			for (col = row - 1; col >= 0; col--)
				free(matrix[col]);
			free(matrix);
			return (NULL);
		}

		for (col = 0; col < width; col++)
			matrix[row][col] = 0;
	}

	return (matrix);
}
