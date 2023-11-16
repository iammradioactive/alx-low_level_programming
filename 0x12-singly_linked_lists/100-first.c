#include <stdio.h>
/**
  * pre_main - prints string before main is executed
  * Return: no return
  */

void __attribute__ ((constructor)) pre_main()
{
	printf("You're beat! and yet, you must allow, \n");
	printf("I bore my house upon my back!\n");
}
