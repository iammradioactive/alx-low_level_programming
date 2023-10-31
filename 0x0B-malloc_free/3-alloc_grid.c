#include "main.h"
/**
 * alloc_grid - create 2D array of integers
 * @width: width of 2D array
 * @height: height of 2D array
 * Return: pointer
*/

int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);
	arr = malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			while (i >= 0)
			{
				free(arr[i]);
				i--;
			}
		}

		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}
	return (arr);
}
