#include "main.h"
/**
 * _strlen - writes the length of a string
 * @s: The string to get the length of
 *
 * Return: The length of @str.
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
