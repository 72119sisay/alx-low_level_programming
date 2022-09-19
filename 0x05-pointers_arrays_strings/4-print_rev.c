#include "main.h"

/**
 * print_rev - a function that prints a reverse string
 *
 * @s: this is the input string
 */
void print_rev(char *s)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
		;
	for (index = index - 1; s[index] != '\0'; index--)
	{
		_Putchar(s[index]);
	}
	_putchar('\n');
}
