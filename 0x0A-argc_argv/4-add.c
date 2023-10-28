#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * main - add positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0
*/

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0', j++)
		{
			if (!isdigitargv[i][j])
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i][j]);
	}
	printf("%d\n", sum);
	return (0);
}
