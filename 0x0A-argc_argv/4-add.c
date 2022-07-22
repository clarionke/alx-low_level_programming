#include <stdio.h>
#include <stdlib>
#include <ctype.h>

/**
 * main - Entry point
 *
 * @argc: number of arguments
 * @argv: arguments passed
 * Return: always 0
 */
int main(int argc, char **argv)
{
	int a, b, addition;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (!isdigit(argv[a][b]))
			{
				printf("Error\n");
				return (1);
			}
		}
		addition = addition + atoi(argv[a]);
	}
	printf("%i\n", addition);
	return (0);
}
