#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of arguments passed into it
 *
 * @argc: Counts the number of parameters that go into main
 * @argv: Pointer of array of pointers containing strings entering main
 * Return: Always 0 (success)
 */
int main( int argc, char *argv[])
{
	int c;
	(void) argv;

	for (c = 0; c <= argc; c++)
	{}
	printf("%d\n", c - 2);
	return (0);
}
