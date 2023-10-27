#include <stdio.h>
/**
  * main - print number of arguments
  * @argc: argument count
  * @argv: argument vector
  * Return: 0
 */

int main(int argc, char *argv[1])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
