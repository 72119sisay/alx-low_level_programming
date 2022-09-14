#include "main.h"
/**
 * A function that prints last digit
 * @n: takes ln an integer
 * Return: result output
 */
int print_last_digit(int n)
{
	int x;
	
 	if (n < 0)	
	    n = -n;
	x = n % 10;
	_putchar(x + '0');
	return (x);
}
