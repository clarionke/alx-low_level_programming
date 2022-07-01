#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main- assign a random number to the variable n each time it is executed. 
 * print the last digit of the number stored in the variable n.
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is ", n);
	if (n > 5)
	{
		printf("%d and is greater than 5\n",n % 10);
	}
	if (n == 0)
	{
		printf("%d and is 0\n", n % 10);
	}
	if (n % 10 < 6 && n !=0)
	{
		printf("%d and is less than 6 and not 0\n", n % 10);
	}
	return (0);
}
