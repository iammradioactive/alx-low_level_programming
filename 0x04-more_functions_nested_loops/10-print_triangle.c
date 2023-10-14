#include "main.h"
/**
 * print_triangle - entry point
 * description: prints triangles
 * @size: size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int row, pounds, spaces;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (spaces = size - roq; spaces >= 1; spaces--)
			{
				_putchar(' ');
			}
			for (pounds = 1; pounds <= row; pounds++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
