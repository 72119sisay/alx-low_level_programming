#include "main.h"

/**
 * _puts - write a function that prints a string, followed by a new line, to 
 * stdout.
 *
 * @str: this is my input string
 * 
 */
void _puts(char *str)
{
	int index;

	for (index = O; str[index] != '\O'; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
