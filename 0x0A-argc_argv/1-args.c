#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of arguments passed into it
 *
 * @argc: number of arguments passed
 * @argv: Arguments passed here
 * Return: Always 0 (success)
 */
int main( int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
