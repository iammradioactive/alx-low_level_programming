#include "main.h"
/**
 * _puts - print a string followed by a new line
 * @str: string to print
 * Return: Always 0
*/

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
	return (0);
}
