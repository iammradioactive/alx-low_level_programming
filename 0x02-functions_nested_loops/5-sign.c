#include "main.h"
/**
  * print_sign - Display the sign of a number
  * @c: character to be checked
  * Return: 1 or 0
 */

int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (c < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
