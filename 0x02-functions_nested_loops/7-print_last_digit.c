#include "main.h"
/**
  * print_last_digit - print the last digit of a number
  * @n: number to be checked
  * Return: value of the last digit of number
 */

int print_last_digit(int n)
{
	int last_number;

	last_number = n % 10;
	if (last_number < 0)
	{
		last_number = last_number * -1;
	}
		_putchar(last_number + '0');
		return (last_number);
}
