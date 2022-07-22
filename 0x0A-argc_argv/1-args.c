#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of arguments passed into it
 *
 * @argc: Counts the number of parameters that go into main
 * @argv: Pointer of array of pointers containing strings entering main
 * Return: Always 0 (success)
 */
int main( int argc, char **argv)
{
	(void) argv;
	printf("%i\n", argc - 1);
	return (0);
}
