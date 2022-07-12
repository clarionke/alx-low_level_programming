#include "main.h"

/**
 * swap_int - swaps the values of two integer.
 * @a: The first integer to be swapped.
 * @b: The scond integer to be wapped.
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
