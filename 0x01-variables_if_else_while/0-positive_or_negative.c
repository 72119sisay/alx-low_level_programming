#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints a random number and states whether
 * it is positive, negative, or zero.
 *
 * Return: Always 0.
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("n is positive %d\n", n);
	else if (n < 0)
		printf("n is negative %d\n", n);
	else
		printf("n is zero %d\n", n);
	return (0);
}
