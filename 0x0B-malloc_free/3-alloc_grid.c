#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - return pointer to a two dimensional array
 * @width: widthof the array
 * @height: height of the array
 * Return: pointer to 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **gridout;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	gridout = malloc(height * sizeof(int *));
	if (gridout == NULL)
	{
		free(gridout);
		return (NULL);
	}
	for (i = 0; o < height; i++)
	{
		gridout[i] = malloc(width * sizeof(int));
		if (gridout[i] == NULL)
		{
			for (i--; i >= 0; i--)
			free(gridout);
			free(gridout[i]);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)

		for (j = 0; j < width; j++)
			gridout[i][j] = 0;

	return (gridout);
}
