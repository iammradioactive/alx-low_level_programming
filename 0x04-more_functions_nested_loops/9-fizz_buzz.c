#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * description: pri numbers 1-100, print fizz for multiples of 3, buzz for multiples of 5 then fizzbuzz for multiples of both
 * Return: always 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else
			printf("%i", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
