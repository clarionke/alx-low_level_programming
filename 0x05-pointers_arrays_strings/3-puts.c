#include "main.h"

/**
 * _puts - prints a string, followed by a new line to stdout
 *
 * @str: the string to be printed out
 *
 * Return: the string
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		_putchar(*(str + i));
		i++;
	}

	_putchar('\n');
}
