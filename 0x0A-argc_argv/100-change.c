#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the change
 * @argc: argumenet count
 * @argv: argument vector
 * Return: always 0
*/

int main(int argc, char **argv)
{
	int total = 0;
	int change;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	change = atoi(argv[1]);

	while (change > 0)
	{
		if (change - 25 >= 0)
			change = change - 25;
		else if (change - 10 >= 0)
			change = change - 10;
		else if (change - 5 >= 0)
			change = change - 5;
		else if (change - 2 >= 0)
			change = change - 2;
		else if (change - 1 >= 0)
			change = change - 1;
		total++;
	}
	printf("%d\n", total);
	return (0);
}
