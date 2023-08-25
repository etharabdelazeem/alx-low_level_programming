#include <stdio.h>

/**
 * prior - function executes before main
 * Return: nothing.
 */

void __attribute__ ((constructor)) prior()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
