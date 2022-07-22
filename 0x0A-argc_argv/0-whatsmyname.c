#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the name of the program, followed by a new line.
 *
 * @argc: counts the number of parameters that go into main
 * @argv: pointer of array of pointers cointaing strings entering main
 * Return: Always 0 (success)
 */
int main(int argc, char **argv)
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
