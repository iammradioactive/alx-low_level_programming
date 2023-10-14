#include "main.h"
/**
  * print_line - print a straight line
  * @n: Number of lines
  * Return: Always 0
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
